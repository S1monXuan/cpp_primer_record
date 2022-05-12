namespace SALES{
    const int QUARTERS = 4;
    class Sales{
        private:
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        public:
            Sales();
            Sales(const double arr[], int n);
            ~Sales();

            void setSales();

            void showSales() const;
    };


}