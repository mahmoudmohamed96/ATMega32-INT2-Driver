/*
 * INT2.h
 *
 *  Created on: Oct 24, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#ifndef INT2_H_
#define INT2_H_

#include <avr/io.h>

/*
            ISC2   Description
-------------------------------------------------------------------
* MODE #1:   0     The low level of INT1 generates an interrupt request.
* MODE #2:   1     The rising edge of INT1 generates an interrupt request.
*/
// Link :

// Select Mode of operation
#define MODE 1

void INT2_INIT (void);

#endif /* INT2_H_ */
