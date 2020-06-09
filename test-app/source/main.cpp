#include <algorithm>
#include <array>
#include <chrono>
#include <exception>
#include <functional>
#include <iostream>

#include <stdexcept>
#include <limits>
#include <memory>
#include <random>
#include <regex>
#include <sstream>
#include <string>
#include <string_view>
#include <thread>
#include <variant>
#include <vector>

namespace outer
{
	enum class numz
	{
		bippity,
		boppity,
		boo
	};

	namespace inner
	{
		auto func( int x, int y, int z, int w ) -> int
		{
			return 1;
		}

		auto func2() -> void {}

		auto func3(
			int x,
			int y,
			int z,
			int w,
			int uieghefei,
			int fjefjgneig,
			int ffuhureihf,
			int oufgeiuggggtru ) -> void
		{
		}
	}
	template<typename type>
	class idontcareclass
	{
	public:
		idontcareclass() = default;
		idontcareclass( int x ) : x{ x } {}

		int func()
		{
			return 1;
		}

		int x;
	};

	template<typename type>
	struct idontcarestruct
	{
	public:
		idontcarestruct() = default;
		idontcarestruct( int x ) : x{ x } {}

		int func()
		{
			return 1;
		}

		int x;
	};

	class veryveryverylongclassliekohmahgawdthisissolongyouguys
	{
	};
	struct veryveryverylongstructliekohmahgawdthisissolongyouguys
	{
	};

	struct derived :
		veryveryverylongclassliekohmahgawdthisissolongyouguys,
		veryveryverylongstructliekohmahgawdthisissolongyouguys
	{
		int x;
	};

	constexpr auto short_string = "This is a short string!";

	constexpr auto long_string =
		"This is a looooooooooooooooooooooooooooooooooooooooooooong string!";

	constexpr auto multi_string =
		"This is the first line!\n"
		"This is the second line!\n";
}

auto main( int num_arguments, char* arguments[] ) -> int
{
	auto arr = std::array{ 1, 2, 3 };

	auto front = arr[1];

	for( auto x : arr )
	{
		std::cout << x << '\n';
	}

	auto func = []() {
		return 1;
	};

	switch( 12 )
	{
		case 1:
		{
			break;
		}
		case 2:
		{
			break;
		}
	}

	if( true )
	{
		int x = 12;
	}
	else if( true )
	{
		int x = 42;
	}
	else
	{
		int x = 69;
	}


	double                     xg      = 12;           // sum comment
	int                        ygfeett = (int)2355.35; // sum other comment
	outer::idontcareclass<int> ght     = {};           // sum moar commentz

	try
	{
		return EXIT_SUCCESS;
	}
	catch( std::exception& )
	{
		return EXIT_FAILURE;
	}
}