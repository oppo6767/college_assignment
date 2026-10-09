#include <iostream>
using namespace std;

class Movie {
    private:
        string title;
        string director;
        double rating;

    public:
        Movie(): title{""}, director{""}, rating{0.0} {}
        Movie(string title, string director, double rating)
            : title{title}, director{director}, rating{rating} {}

        void setTitle(string t) { title = t; }
        void setDirector(string d) { director = d; }
        void setRating(double r) { rating = r; }

        string getTitle() { return title; }
        string getDirector() { return director; }
        double getRating() { return rating; }

        void print() {
            cout << "영화 제목: " << title << endl;
            cout << "영화 감독: " << director << endl;
            cout << "영화 평점: " << rating << endl;
        }
};

int main() {
    Movie m1{"타이타닉", "제임스 카메론", 9.5};
    cout << "영화 #1" << endl;
    m1.print();
    cout << endl;

    Movie m2{};
    m2.setTitle("지오스톰");
    m2.setDirector("딘 데블린");
    m2.setRating(8.34);
    cout << "영화 #1" << endl;
    cout << "영화 제목: " << m2.getTitle() << endl;
    cout << "영화 감독: " << m2.getDirector() << endl;
    cout << "영화 평점: " << m2.getRating() << endl;

    return 0;
}