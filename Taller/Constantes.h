#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED



// Mathematical constants
#define PI 3.1415926535897932384626433832795028841971693993751
#define PI2        (2.0*3.1415926535897932384626433832795028841971693993751)              // 2pi
#define RAD        (3.1415926535897932384626433832795028841971693993751 / 180.0)          // Radians per degree
#define DEG        (180.0 / 3.1415926535897932384626433832795028841971693993751 )         // Degrees per radian
#define ARCS       (3600.0*180.0/3.1415926535897932384626433832795028841971693993751)     // Arcseconds per radian

// General
#define MJD_J2000  (51544.5)             // Modif. Julian Date of J2000.0
#define T_B1950    (-0.500002108)        // Epoch B1950
#define c_light    (299792457.999999984) // Speed of light  [m/s] DE200
#define AU         (149597870659.999996) // Astronomical unit [m] DE200

// Physical parameters of the Earth, Sun and Moon

// Equatorial radius and flattening
#define R_Earth      (6378.137e3)        // Radius Earth [m] WGS-84
#define f_Earth    (1.0/298.257223563)   // Flattening WGS-84
#define R_Sun      (696000.0e3)          // Radius Sun [m] Seidelmann 1992
#define R_Moon       (1738.0e3)          // Radius Moon [m]

// Earth rotation (derivative of GMST at J2000 differs from inertial period by precession)
#define omega_Earth  (7.2921158553e-5)   // [rad/s] Aoki 1982, NIMA 1997

// Gravitational coefficients
#define GM_Earth (398600.4418e9)                // [m^3/s^2] WGS-84
#define GM_Sun (1.327124399354841e20)         // [m^3/s^2] DE200
#define GM_Moon (398600.4418e9/81.3005869999999931) // [m^3/s^2] DE200
#define GM_Mercury (22032.08047272131e9)          // [m^3/s^2] DE200
#define GM_Venus (324858.7656168717e9)         // [m^3/s^2] DE200
#define GM_Mars (42828.28658876890e9 )         // [m^3/s^2] DE200
#define GM_JuM_PIter (126712597.0817946e9 )         // [m^3/s^2] DE200
#define GM_Saturn (37939519.70882996e9  )        // [m^3/s^2] DE200
#define GM_Uranus (5780158.533597719e9)          // [m^3/s^2] DE200
#define GM_Neptune (6871307.771479524e9)          // [m^3/s^2] DE200
#define GM_Pluto (1020.864920706286e9)          // [m^3/s^2] DE200

// Solar radiation pressure at 1 AU
#define P_Sol        (4.560e-6)          // [N/m^2] (~1367 W/m^2) IERS 96



#endif // CONSTANTES_H_INCLUDED
