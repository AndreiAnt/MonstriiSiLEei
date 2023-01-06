#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <random>
#include <cstdio>
#include <chrono>

using namespace std;



struct cast
{
    std::string name;
    std::string role;
    std::string clas;
    std::string type;
};

void typeFood(struct cast info[], int contor)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);
    int randomNumber = dis(gen);
    if(randomNumber == 1)
    {
        info[contor].type = "vegetarian";
    }
    if(randomNumber == 2)
    {
        info[contor].type = "no restriction";
    }
    if(randomNumber == 3)
    {
        info[contor].type = "flexitarian";
    }

}

void addPeople(int numPeople, int contor, struct cast info[])
{
    std::ofstream file("castEN.csv", std::ios_base::app);


    std::string name;
    std::string role;
    std::string clas = "none";
    std::string type;


    for (int i = 0; i < numPeople; i++)
    {
        name = "Extra " + std::to_string(i + 1);

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 3);
        int randomNumber = dis(gen);
        if(randomNumber == 1)
        {
            type = "vegetarian";
        }
        if(randomNumber == 2)
        {
            type = "no restriction";
        }
        if(randomNumber == 3)
        {
            type = "flexitarian";
        }

        std::uniform_int_distribution<> din(1, 5);
        int randomNumber2 = din(gen);
        if(randomNumber2 == 1)
        {
            role = "set designer";
        }
        if(randomNumber2 == 2)
        {
            role = "assistant art director";
        }
        if(randomNumber2 == 3)
        {
            role = "storyboard artist";
        }
        if(randomNumber2 == 4)
        {
            role = "supervising sound editor";
        }
        if(randomNumber2 == 5)
        {
            role = "sound effects editor";
        }

        info[contor].name = name;
        info[contor].role = role;
        info[contor].clas = clas;
        info[contor].type = type;

        contor++;

        file << name << "," << role << "," << clas << "," << type << "\n";
    }

    file.close();
}
void addType(struct cast info[], int contor)
{
    std::ofstream file("castEN.csv", std::ios_base::app);

    std::string name;
    std::string role;
    std::string clas;
    std::string type;

    for(int i = 0; i < contor; i++)
    {
        name = info[i].name;
        role = info[i].role;
        clas = info[i].clas;
        type = info[i].type;

        file << name << "," << role << "," << clas << "," << type << "\n";
    }
    file.close();
}

void addMenu()
{
    ofstream file1("menuEN.csv");
    file1.close();
    ofstream file2("menuRO.csv");
    file2.close();

    std::ofstream file("menuEN.csv", std::ios_base::app);

    file<<"Menu for people with no restriction"<<"\n";
    file<<"Day 1"<<","<<""<<","<<"Day 2"<<","<<""<<","<<"Day 3"<<"\n";
    file<<"Chicken noodle soup"<<","<<""<<","<<"Japanese ramen noodle soup"<<","<<""<<","<<"Meatball & tomato soup"<<"\n";
    file<<"Chilli con carne"<<","<<""<<","<<"Chilli con carne recipe"<<","<<""<<","<<"Chicken pasta bake"<<"\n";
    file<<"Salted chocolate & hazelnut brownies"<<","<<""<<","<<"Chocolate truffle & honeycomb torte"<<","<<""<<","<<"Lemon sponge cake"<<"\n";
    file<<""<<","<<""<<","<<""<<","<<""<<","<<""<<"\n";

    file<<"Menu for vegetarians"<<"\n";
    file<<"Day 1"<<","<<""<<","<<"Day 2"<<","<<""<<","<<"Day 3"<<"\n";
    file<<"Red pepper & tomato soup"<<","<<""<<","<<"Spicy roasted parsnip soup"<<","<<""<<","<<"Spicy roasted parsnip soup"<<"\n";
    file<<"Balsamic lentil pies with vegetable mash"<<","<<""<<","<<"Indian butternut squash curry"<<","<<""<<","<<"Mushroom buckwheat risotto"<<"\n";
    file<<"Vegan sticky toffee pear pudding"<<","<<""<<","<<"Ultimate plum & apple cobbler"<<","<<""<<","<<"Raspberry ripple blondie"<<"\n";
    file<<""<<","<<""<<","<<""<<","<<""<<","<<""<<"\n";

    file<<"Menu for Flexitarians"<<"\n";
    file<<"Day 1"<<","<<""<<","<<"Day 2"<<","<<""<<","<<"Day 3"<<"\n";
    file<<"Ginger red lentil soup"<<","<<""<<","<<"Carrot & cashew soup"<<","<<""<<","<<"Silky Chinese five spice pumpkin soup"<<"\n";
    file<<"Black sesame and coconut curry bowl"<<","<<""<<","<<"Black-eyed bean sliders with pico de gallo"<<","<<""<<","<<"Roasted cauliflower and mint orecchiette"<<"\n";
    file<<"Apple crumble muffins"<<","<<""<<","<<"Rhubarb & strawberry chia pudding"<<","<<""<<","<<"Mango & orange ginger sorbet"<<"\n";
    file<<""<<","<<""<<","<<""<<","<<""<<","<<""<<"\n";

    file.close();

    std::ofstream file3("menuRO.csv", std::ios_base::app);

    file3<<"Meniu pentru persoanele fara restrictii"<<"\n";
    file3<<"Ziua 1"<<","<<""<<","<<"Ziua 2"<<","<<""<<","<<"Ziua 3"<<"\n";
    file3<<"Supa de pui cu taitei"<<","<<""<<","<<"Supa japoneza de ramen"<<","<<""<<","<<"Supa de carne de vita cu rosii"<<"\n";
    file3<<"Chilli con carne"<<","<<""<<","<<"Reteta pentru chilli con carne"<<","<<""<<","<<"Paste de pui la cuptor"<<"\n";
    file3<<"Brownie-uri cu ciocolata si nuci prajite"<<","<<""<<","<<"Tort de trufe de ciocolata si miere de albine"<<","<<""<<","<<"Prajitura de lamaie"<<"\n";
    file3<<""<<","<<""<<","<<""<<","<<""<<","<<""<<"\n";

    file3<<"Meniu pentru vegetarieni"<<"\n";
    file3<<"Ziua 1"<<","<<""<<","<<"Ziua 2"<<","<<""<<","<<"Ziua 3"<<"\n";
    file3<<"Supa de rosii si ardei"<<","<<""<<","<<"Supa de morcovi prajiti si pastarnac"<<","<<""<<","<<"Supa de dovleac indiana"<<"\n";
    file3<<"Placinte cu linte si piure de legume"<<","<<""<<","<<"Curry de dovleac indian"<<","<<""<<","<<"Risotto de ciuperci si grau"<<"\n";
    file3<<"Pudine de pere cu caramel"<<","<<""<<","<<"Tort de capsuni si mere"<<","<<""<<","<<"Blondie cu zmeura"<<"\n";
    file3<<""<<","<<""<<","<<""<<","<<""<<","<<""<<"\n";

    file3 << "Meniu pentru flexitarieni" << "\n";
    file3 << "Ziua 1" << "," << "" << "," << "Ziua 2" << "," << "" << "," << "Ziua 3" << "\n";
    file3 << "Supa de linte rosie cu ghimbir" << "," << "" << "," << "Supa de morcovi si caju" << "," << "" << "," << "Supa fina de dovleac cu condimente chinezesti cinci condimente" << "\n";
    file3 << "Cuptor de curry de cocos si sesame negru" << "," << "" << "," << "Slideri de fasole ochi negri cu pico de gallo" << "," << "" << "," << "Orecchiette de conopida prajita si menta" << "\n";
    file3 << "Briosa cu crumble de mere" << "," << "" << "," << "Budinca de chia cu rubarba si fragi" << "," << "" << "," << "Sorbet de ghimbir cu mango si portocale" << "\n";
    file3 << "" << "," << "" << "," << "" << "," << "" << "," << "" << "\n";

    file3.close();
}

void csvFinal(int sumAutocare, int sumMachiaj, int sumMancare, int sumCazare, int sumBautura)
{
    ofstream file1("FinalEN.csv");
    file1.close();

    ofstream file2("FinalRO.csv");
    file2.close();

    double ronInDollar = 4.68 ;
    double transport = double(sumAutocare) / ronInDollar;
    double cazare = double(sumCazare) / ronInDollar;
    double machiaj = double(sumMachiaj) / ronInDollar;
    double mancareSiBauturua = (double(sumMancare) + double(sumBautura)) / ronInDollar;

    std::ofstream file("FinalEN.csv", std::ios_base::app);
    file<<"Final costs"<<"\n";

    file<<"\n";
    file<<"Price for 30 days in dollars"<<"\n";
    file<<"Transport"<<","<<transport<<"\n";
    file<<"Accommodation"<<","<<cazare * 30<<"\n";
    file<<"Makeup"<<","<<machiaj * 30<<"\n";
    file<<"Food and drink"<<","<<mancareSiBauturua * 30<<"\n";
    file<<"Rent space"<<","<<(30 * 10000 - (30 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";
    file<<"Total cost"<<","<<transport * 30 + cazare * 30 + machiaj * 30 + mancareSiBauturua * 30 + (30 * 10000 - (30 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";

    file<<"\n";
    file<<"Price for 45 days in dollars"<<"\n";
    file<<"Transport"<<","<<transport<<"\n";
    file<<"Accommodation"<<","<<cazare * 45<<"\n";
    file<<"Makeup"<<","<<machiaj * 45<<"\n";
    file<<"Food and drink"<<","<<mancareSiBauturua * 45<<"\n";
    file<<"Rent space"<<","<<(45 * 10000 - (45 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";
    file<<"Total cost"<<","<<transport * 45 + cazare * 45 + machiaj * 45 + mancareSiBauturua * 45 + (45 * 10000 - (45 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";

    file<<"\n";
    file<<"Price for 60 days in dollars"<<"\n";
    file<<"Transport"<<","<<transport<<"\n";
    file<<"Accommodation"<<","<<cazare * 60<<"\n";
    file<<"Makeup"<<","<<machiaj * 60<<"\n";
    file<<"Food and drink"<<","<<mancareSiBauturua * 60<<"\n";
    file<<"Rent space"<<","<<(60 * 10000 - (60 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";
    file<<"Total cost"<<","<<transport * 60 + cazare * 60 + machiaj * 60 + mancareSiBauturua * 60 + (60 * 10000 - (60 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";

    file<<"\n";
    file<<"Price for 100 days in dollars"<<"\n";
    file<<"Transport"<<","<<transport<<"\n";
    file<<"Accommodation"<<","<<cazare * 100<<"\n";
    file<<"Makeup"<<","<<machiaj * 100<<"\n";
    file<<"Food and drink"<<","<<mancareSiBauturua * 100<<"\n";
    file<<"Rent space"<<","<<(100 * 10000 - (100 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";
    file<<"Total cost"<<","<<transport * 100 + cazare * 100 + machiaj * 100 + mancareSiBauturua * 100 + (100 * 10000 - (100 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";

    file.close();



    std::ofstream file3("FinalRO.csv", std::ios_base::app);
    file3<<"Costuri finale"<<"\n";

    file3<<"\n";
    file3<<"Pret pentru 30 de zile in dolari"<<"\n";
    file3<<"Transport"<<","<<transport<<"\n";
    file3<<"Cazare"<<","<<cazare * 30<<"\n";
    file3<<"Machiaj"<<","<<machiaj * 30<<"\n";
    file3<<"Mancare si bautura"<<","<<mancareSiBauturua * 30<<"\n";
    file3<<"Inchiriere spatiu"<<","<<(30 * 10000 - (30 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";
    file3<<"Cost total"<<","<<transport * 30 + cazare * 30 + machiaj * 30 + mancareSiBauturua * 30 + (30 * 10000 - (30 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";

    file3<<"\n";
    file3<<"Pret pentru 45 de zile in dolari"<<"\n";
    file3<<"Transport"<<","<<transport<<"\n";
    file3<<"Cazare"<<","<<cazare * 45<<"\n";
    file3<<"Machiaj"<<","<<machiaj * 45<<"\n";
    file3<<"Mancare si bautura"<<","<<mancareSiBauturua * 45<<"\n";
    file3<<"Inchiriere spatiu"<<","<<(45 * 10000 - (45 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";
    file3<<"Cost total"<<","<<transport * 45 + cazare * 45 + machiaj * 45 + mancareSiBauturua * 45 + (45 * 10000 - (45 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";

    file3<<"\n";
    file3<<"Pret pentru 60 de zile in dolari"<<"\n";
    file3<<"Transport"<<","<<transport<<"\n";
    file3<<"Cazare"<<","<<cazare * 60<<"\n";
    file3<<"Machiaj"<<","<<machiaj * 60<<"\n";
    file3<<"Mancare si bautura"<<","<<mancareSiBauturua * 60<<"\n";
    file3<<"Inchiriere spatiu"<<","<<(60 * 10000 - (60 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";
    file3<<"Cost total"<<","<<transport * 60 + cazare * 60 + machiaj * 60 + mancareSiBauturua * 60 + (60 * 10000 - (60 / 10) * (2 * 100000 / 100)) / ronInDollar<<"\n";

    file3 << "\n";
    file3 << "Pret pentru 100 de zile in dolari" << "\n";
    file3 << "Transport" << "," << transport << "\n";
    file3 << "Cazare" << "," << cazare * 100 << "\n";
    file3 << "Machiaj" << "," << machiaj * 100 << "\n";
    file3 << "Mancare si bauturi" << "," << mancareSiBauturua * 100 << "\n";
    file3 << "Inchiriere spatiu" << "," << (100 * 10000 - (100 / 10) * (2 * 100000 / 100)) / ronInDollar << "\n";
    file3 << "Cost total" << "," << transport * 100 + cazare * 100 + machiaj * 100 + mancareSiBauturua * 100 + (100 * 10000 - (100 / 10) * (2 * 100000 / 100)) / ronInDollar << "\n";

    file3.close();



}


void typeFoodRO(struct cast det[], int count)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);
    int randomNumber = dis(gen);
    if(randomNumber == 1)
    {
        det[count].type = "vegetarian";
    }
    if(randomNumber == 2)
    {
        det[count].type = "fara restrictii";
    }
    if(randomNumber == 3)
    {
        det[count].type = "flexiterian";
    }

}

void addTypeRO(struct cast det[], int count)
{
    std::ofstream file("castRO.csv", std::ios_base::app);

    std::string name;
    std::string role;
    std::string clas;
    std::string type;

    for(int i = 0; i < count; i++)
    {
        name = det[i].name;
        role = det[i].role;
        clas = det[i].clas;
        type = det[i].type;

        file << name << "," << role << "," << clas << "," << type << "\n";
    }
    file.close();
}

void addPeopleRO(int numPeople, int count, struct cast info[])
{
    std::ofstream file("castRO.csv", std::ios_base::app);


    std::string name;
    std::string role;
    std::string clas = "niciuna";
    std::string type;


    for (int i = 0; i < numPeople; i++)
    {
        name = "Extra " + std::to_string(i + 1);

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 3);
        int randomNumber = dis(gen);
        if(randomNumber == 1)
        {
            type = "vegetarian";
        }
        if(randomNumber == 2)
        {
            type = "fara restrictii";
        }
        if(randomNumber == 3)
        {
            type = "flexiterian";
        }

        std::uniform_int_distribution<> din(1, 5);
        int randomNumber2 = din(gen);
        if(randomNumber2 == 1)
        {
            role = "scenograf";
        }
        if(randomNumber2 == 2)
        {
            role = "asistent director de arta";
        }
        if(randomNumber2 == 3)
        {
            role = "artist de storyboard";
        }
        if(randomNumber2 == 4)
        {
            role = "supravegherea editorului de sunet";
        }
        if(randomNumber2 == 5)
        {
            role = "editor de efecte sonore";
        }

        info[count].name = name;
        info[count].role = role;
        info[count].clas = clas;
        info[count].type = type;

        count++;

        file << name << "," << role << "," << clas << "," << type << "\n";
    }

    file.close();
}



int main()
{

    cast info[868];



    std::ifstream file("castEN.csv");
    std::string line;

    int contor = 0;

    while (std::getline(file, line))
    {
        std::stringstream lineStream(line);
        std::string cell;

        int activate = 0;

        while (std::getline(lineStream, cell, ','))
        {
            if(activate == 3)
            {
                info[contor].type = cell;
                if(info[contor].type == "none")
                {
                    typeFood(info, contor);
                }
                activate++;
            }
            if(activate == 2)
            {
                info[contor].clas = cell;
                activate++;
            }
            if(activate == 1)
            {
                info[contor].role = cell;
                activate++;
            }
            if(activate == 0)
            {
                info[contor].name = cell;
                activate++;
            }




        }

        contor++;
    }

    file.close();

    ofstream file1("castEN.csv");
    file1.close();

    addType(info, contor);

    addPeople(132, contor, info);

    contor = contor + 132;

    int i = 0;

//    for(i = 0; i < contor; i++)
//    {
//        std::cout<<"info["<<i<<"].name = "<<info[i].name<<std::endl;
//        std::cout<<"info["<<i<<"].role = "<<info[i].role<<std::endl;
//        std::cout<<"info["<<i<<"].clas = "<<info[i].clas<<std::endl;
//        std::cout<<"info["<<i<<"].type = "<<info[i].type<<std::endl;
//        std::cout<<std::endl;
//    }

    int sumAutocare = 0, nrAutocare = 0;
    if((contor - 1) % 50 != 0)
    {
        nrAutocare = (contor - 1) / 50 + 1;
    }
    else
    {
        nrAutocare = (contor - 1) / 50;
    }
    sumAutocare = nrAutocare * 5680 * 2;///Suma autocare

    int sumMachiaj = 0;
    int sumMancare = 0;
    int mainCast = 0;
    int normalCast = 0;

    for(i = 0; i < contor; i++)
    {
        if(info[i].clas == "vampire")
        {
            sumMachiaj = sumMachiaj + 230;
        }
        if(info[i].clas == "werewolf")
        {
            sumMachiaj = sumMachiaj + 555;
        }
        if(info[i].clas == "siren")
        {
            sumMachiaj = sumMachiaj + 345;
        }
        if(info[i].clas == "clarvoyance")
        {
            sumMachiaj = sumMachiaj + 157;
        }
        if(info[i].clas == "human")
        {
            sumMachiaj = sumMachiaj + 55;
        }


        if(info[i].type == "vegetarian")
        {
            sumMancare = sumMancare + 33;
        }
        if(info[i].type == "no restriction")
        {
            sumMancare = sumMancare + 40;
        }
        if(info[i].type == "flexitarian")
        {
            sumMancare = sumMancare + 46;
        }

        if((info[i].role == "actor/actress main") || (info[i].role == "actor/actress"))
        {
            mainCast++;
        }
        else
        {
            normalCast++;
        }


    }

    ///sumMachiaj este pretul/zi a machiajului fiecarui actor

    addMenu();

    int sumCazare = 0;

    if(mainCast % 2 == 0)
    {
        sumCazare = sumCazare + (mainCast / 2) * 350;
    }
    else
    {
        sumCazare = sumCazare + ((mainCast / 2) + 1)* 350;
    }

    if(normalCast % 3 == 0)
    {
        sumCazare = sumCazare + (normalCast / 3) * 420;
    }
    else
    {
        sumCazare = sumCazare + ((normalCast / 3) + 1)* 420;
    }

    ///sumCazare este pretul total/noapte al tuturor camerelor

    int sumApa = 0, sumCafea = 0, sumSuc = 0;
    double sumaSuc = 0;

    if((contor - 1) % 2 == 0)
    {
        sumApa = (contor - 1) / 2;
        sumApa = sumApa * 6;
    }
    else
    {
        sumApa = (contor - 1) / 2 + 1;
        sumApa = sumApa * 6;
    }
    ///sumApa este pretul total de apa/zi

    if((contor - 1) % 2 == 0)
    {
        sumCafea = (contor - 1) / 2;
        sumCafea = sumCafea * 30;
    }
    else
    {
        sumCafea = (contor - 1) / 2 + 1;
        sumCafea = sumCafea * 30;
    }
    ///sumCafea este pretul total de cafea/zi

    double suc = (contor - 1) * 0.8;

    if(fmod(suc, 2) == 0)
    {
        sumaSuc = suc / 2;
        sumSuc = (int) sumaSuc;
        sumSuc = sumSuc * 8;
    }
    else
    {
        sumaSuc = suc / 2 + 1;
        sumSuc = (int) sumaSuc;
        sumSuc = sumSuc * 8;
    }
    ///sumSuc este pretul total de suc/zi

    int sumBautura = 0;
    ///sumBautura este pretul total de bautura/zi

    sumBautura = sumApa + sumCafea + sumSuc;

    csvFinal(sumAutocare, sumMachiaj, sumMancare, sumCazare, sumBautura);

    cast det[868];



    std::ifstream fisier("castRO.csv");
    std::string linie;

    int count = 0;

    while (std::getline(fisier, linie))
    {
        std::stringstream lineStream(linie);
        std::string cell;

        int activate = 0;

        while (std::getline(lineStream, cell, ','))
        {
            if(activate == 3)
            {
                det[count].type = cell;
                if((det[count].type == "niciunul") || (det[count].type == "niciuna"))
                {
                    typeFoodRO(det, count);
                }
                activate++;
            }
            if(activate == 2)
            {
                det[count].clas = cell;
                activate++;
            }
            if(activate == 1)
            {
                det[count].role = cell;
                activate++;
            }
            if(activate == 0)
            {
                det[count].name = cell;
                activate++;
            }


        }

        count++;
    }

    fisier.close();

    ofstream fisier1("castRO.csv");
    fisier1.close();

    addTypeRO(det, count);

    addPeopleRO(132, count, det);







    return 0;
}
