#ifndef INTEGER_H
#define INTEGER_H

#include "Expression.h"





class Integer final : public Expression, public std::enable_shared_from_this<Integer> {
	private:
		const int value;
		Integer(int value);
	public:
		static std::shared_ptr<const Integer> create(int value);
		~Integer() = default;
		float approximate() const override;
		bool equals(std::shared_ptr<const Expression> comparator) const override;
		std::shared_ptr<const Expression> simplify() const override;
		std::string toString() const override;
		int getValue() const;

		
		/*	MATH OPERATORS OVERLOAD	*/
		//	+	(Addition)
		std::shared_ptr<const Integer> operator+(const Integer& other) const;
		std::shared_ptr<const Integer> operator+(const int other) const;
		
		//	-	(Subtracttion)
		std::shared_ptr<const Integer> operator-(const Integer& other) const;
		std::shared_ptr<const Integer> operator-(const int other) const;
		
		//	*	(Multiplication)
		std::shared_ptr<const Integer> operator*(const Integer& other) const;
		std::shared_ptr<const Integer> operator*(const int other) const;
		
		//	/	(Division)
		std::shared_ptr<const Integer> operator/(const Integer& other) const;
		std::shared_ptr<const Integer> operator/(const int other) const;


		/*	COMPARATORS OVERLOAD	*/
		//	==	(Equals)
		bool operator==(const Integer& other) const;
		bool operator==(const int other) const;

		//	!=	(Differs)
		bool operator!=(const Integer& other) const;
		bool operator!=(const int other) const;

		//	<	(Less Than)
		bool operator<(const Integer& other) const;
		bool operator<(const int other) const;

		//	<=	(Less Or Equal To)
		bool operator<=(const Integer& other) const;
		bool operator<=(const int other) const;

		//	>	(Greater Than)
		bool operator>(const Integer& other) const;
		bool operator>(const int other) const;

		//	>=	(Greater Or Equal To)
		bool operator>=(const Integer& other) const;
		bool operator>=(const int other) const;
};

#endif