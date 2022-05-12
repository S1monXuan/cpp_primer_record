const int Len = 40;
class golf
{
    private:
        char fullname[Len];
        int handi;
    public:
        void setgolf(const char * name, int hc);
        int setgolf();
        void handicap(int hc);
        void showgolf() const;
};
