//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Use this enum class for indicating the lat/long direction
enum class Compass {N, S, W, E};

// Write your code here
class GPS { 
private: 
double getLatitude{0.0,90.0};
Compass getLatitudeDirection {Compass::N, Compass::S;} ; 
double getLongitude; {0.0,180.0};
Compass getLongitudeDirection; {Compass::W,Compass::E;};
public:
  double latitude() {return getLatitude;}
  Compass latitudedirection {return getLatitudeDirection;}
  double getlongitude {return getlongitude;}
  Compass getLatitude {return getlongitude;}  
};
enum compass{
  double longitude;
  double latitude;
};
double longitude{ return getlongitude};
double latitude{ return getLatitude};
int main(){
if (latitude==0)
  latitude==compass::N;
if (longitude==0)
  longitude==compass::W;  
if (latitude !=90)
  latitude=0;
if (longitude !=180)
  longitude= 0;      
}
//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------

TEST_CASE( "GPS" ) {
    SECTION( "t1" ) {
        GPS c;
        REQUIRE( c.getLatitude() == 0.0 );
        REQUIRE( c.getLatitudeDirection() == Compass::N );
        REQUIRE( c.getLongitude() == 0.0 );
        REQUIRE( c.getLongitudeDirection() == Compass::W );
    }
    SECTION( "t2" ) {
        GPS c{12.12, 50.34};
        REQUIRE( c.getLatitude() == 12.12 );
        REQUIRE( c.getLatitudeDirection() == Compass::N );
        REQUIRE( c.getLongitude() == 50.34 );
        REQUIRE( c.getLongitudeDirection() == Compass::W );
    }
    SECTION( "t3" ) {
        GPS c{12.12, Compass::S, 50.34, Compass::E};
        REQUIRE( c.getLatitude() == 12.12 );
        REQUIRE( c.getLatitudeDirection() == Compass::S );
        REQUIRE( c.getLongitude() == 50.34 );
        REQUIRE( c.getLongitudeDirection() == Compass::E );
    }
    SECTION( "t4" ) {
        GPS c{122.12, 50.34};
        REQUIRE( c.getLatitude() == 0.0 );
        REQUIRE( c.getLongitude() == 50.34 );
    }
    SECTION( "t5" ) {
        GPS c{122.12, 500.34};
        REQUIRE( c.getLatitude() == 0.0 );
        REQUIRE( c.getLongitude() == 0.0 );
    }
    SECTION( "t6" ) {
        GPS c{-122.12, 50.34};
        REQUIRE( c.getLatitude() == 0.0 );
        REQUIRE( c.getLongitude() == 50.34 );
    }
    SECTION( "t7" ) {
        GPS c{12.12, -50.34};
        REQUIRE( c.getLatitude() == 12.12 );
        REQUIRE( c.getLongitude() == 0.0 );
    }
    SECTION( "t8" ) {
        GPS c{12.12, Compass::W, 50.34, Compass::E};
        REQUIRE( c.getLatitude() == 12.12 );
        REQUIRE( c.getLatitudeDirection() == Compass::N );
        REQUIRE( c.getLongitude() == 50.34 );
        REQUIRE( c.getLongitudeDirection() == Compass::E );
    }
    SECTION( "t9" ) {
        GPS c{12.12, Compass::N, 50.34, Compass::N};
        REQUIRE( c.getLatitude() == 12.12 );
        REQUIRE( c.getLatitudeDirection() == Compass::N );
        REQUIRE( c.getLongitude() == 50.34 );
        REQUIRE( c.getLongitudeDirection() == Compass::W );
    }
    SECTION( "t10" ) {
        GPS c{-12.12, Compass::E, 540.34, Compass::N};
        REQUIRE( c.getLatitude() == 0.0 );
        REQUIRE( c.getLatitudeDirection() == Compass::N );
        REQUIRE( c.getLongitude() == 0.0 );
        REQUIRE( c.getLongitudeDirection() == Compass::W );
    }
}
//------------------------------
