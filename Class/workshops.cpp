struct Workshop{
  start_time
  duration
  end_time
}

struct Available_Workshops{
   int n;
   char Workshop[n];
}

Available_Workshops* initialize(int start_time[], int duration[], int n){
   Available_Workshops* temp = new Available_Workshops;
   temp->AvailWork = new Workshop[n];

   temp->n = n;

   for(int i=0;i<n;++i){

    temp->AvailWork[i].StartTime = start_time[i];
    temp->AvailWork[i].Duration = duration[i];
  }

return temp;
}

int CalclulateMaxWorkshops(Available_Workshops* ptr){
   int max_workshop=1;
   int temp=0;
   vector<pair<int, int> > General_Vector;
   for(int i=0 ; i < ptr->n; i++){
    temp = ptr->AvailWork[i].StartTime + ptr->AvailWork[i].Duration;

 
}
   General_Vector.push_back(std::make_pair(ptr->AvailWork[i].StartTime, temp));
stable_sort(General_Vector.begin(), General_Vector.end(), [](const pair<int, int>& lhs, const pair<int, int>& rhs) -> bool {
         if (lhs.second == 0)
             return true;
         return lhs.second < rhs.second; } );

std::vector<pair<int, int> >::iterator it2 = General_Vector.begin();


 for(std::vector<pair<int, int> >::iterator it = General_Vector.begin() + 1  ; it < General_Vector.end() ; ++it){ 

    int p_a = it->first; 
    int p_b = it2->second;

    if (General_Vector[p_a] >= General_Vector[p_b]) 

  {
      max_workshop++;
      it2 = it; 
  }
}
