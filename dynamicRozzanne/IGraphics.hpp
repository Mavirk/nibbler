#ifndef IGRAPHICS_HPP
#define IGRAPHICS_HPP
#include <string>
#include "Snake.hpp"

class IGraphics{
public:
  IGraphics();
  virtual ~IGraphics();
  /* use virtual otherwise linker will try to perform static linkage */
  virtual void	init( std::string title, int xpos, int ypos, int width, int height, bool fullscreen ) = 0;
  virtual char	handleInput( void ) = 0;
  virtual void	update( void ) = 0;
  virtual void	render( Snake& snake ) = 0;
  virtual void	clean( void ) = 0;
  virtual bool  running () = 0;
};

#endif