
//==============================================================================
/*!
 * @file usestl.h
 * @brief simple usage of stl.
 *
 * @date 20180526
 * @version
 * @author yehuohan, <yehuohan@gmail.com>
 * @copyright
 */
//==============================================================================


#ifndef _USE_STL
#define _USE_STL

#include <iostream>

#define PutTitle(str)     std::cout << str
#define PutContent(str)   std::cout << "    " << str


// Container
extern void container_vector(void);
extern void container_list(void);
extern void container_hash_map(void);
extern void container_hash_set(void);
extern void container_iterator(void);

// Algorithm
extern void algorithm_maxmin(void);
extern void algorithm_sort(void);

// Thread
extern void thread_thread(void);


#endif /* ifndef _USE_STL */
