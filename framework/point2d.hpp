# ifndef BUW_POINT2D_HPP
# define BUW_POINT2D_HPP

class Point2d{

	public:

		Point2d();
							

		~Point2d();

		Point2d(float x, float y);
		Point2d(Point2d const& p);

		float getX() const;
		float getY() const;

		void rotate(float angle);

		void translate(float x2, float y2);

	private:
		float x_;
		float y_;
			
};

# endif // BUW_POINT2D_HPP