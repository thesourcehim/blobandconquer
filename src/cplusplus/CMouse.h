/*
Copyright (C) 2006 Parallel Realities

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USAf.

*/

class Mouse
{
	private:
		
		Mouse();
		
		static Mouse instance;
		
		bool busy;

	public:

		int x, y;
		int buttonState[MAX_MOUSE_BUTTONS];
		int wheelState;
		bool grab;
		
	static Mouse *getInstance();
		
	~Mouse();
	
	void setBusy(bool busy);
	bool isBusy();
	
	void set(int x, int y);
	void move(int x, int y);
	
	void clear();
	
	const char *translateMouseButton(int button);
	
};
