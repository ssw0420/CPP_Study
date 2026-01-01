#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor; // forward declaration

class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;

public:
	Patient(string name_in) : m_name(name_in)
	{

	}

	void AddDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void MeetDoctors();

	friend class Doctor;
	
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients;

public:
	Doctor(string name_in) : m_name(name_in)
	{

	}

	void AddPatient(Patient* new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void MeetPatient()
	{
		for (auto& pat : m_patients)
		{
			cout << "Meet Patient: " << pat->m_name << endl;
		}
	}

	friend class Patient;
};

void Patient::MeetDoctors()
{
	for (auto& doc : m_doctors)
	{
		cout << "Meet Doctor: " << doc->m_name << endl;
	}
}

int main(void)
{
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->AddDoctor(d1);

	p2->AddDoctor(d1);
	p2->AddDoctor(d2);

	d1->AddPatient(p1);
	d1->AddPatient(p2);

	d2->AddPatient(p2);

	// pateints meet doctors
	p1->MeetDoctors();

	// doctors mmet patients
	d1->MeetPatient();

	// deletes
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}
