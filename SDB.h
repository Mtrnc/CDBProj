typedef struct SimpleDb
{
 uint32 Student_ID;
 uint32 Student_year;
 uint32 Course1_ID;
 uint32 Course1_grade;
 uint32 Course2_ID;
 uint32 Course2_grade;
 uint32 Course3_ID;
 uint32 Course3_grade;

}student;

bool SDB_IsFull();//Function to display whether the system is full or not
uint8 SDB_GetUsedSize();//Function to display the used the size out of the available size
bool SDB_AddEntry();//Function to add an entry
bool SDB_ReadEntry(uint32 id);//Function to display students data
void SDB_DeletEntry(uint32 id);//Function to add entry
void SDB_GetList(uint8* co , uint32* list);//Function to get the student count and the list of Array
bool SDB_IsIdExist (uint32 id);//Function to check if the ID exists or not
void SDB_APP();//Function that runs the application
void SDB_action(uint8 c);//Function where to run the action from which the choice is chosen

