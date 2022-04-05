#pragma once

/*
** RPI Game Architecture Engine
**
** Portions adapted from:
** Viper Engine - Copyright (C) 2016 Velan Studios - All Rights Reserved
**
** This file is distributed under the MIT License. See LICENSE.txt.
*/

#include "ga_component.h"
#include <lua.hpp>
/*
** A component whose logic is implemented in LUA.
*/
class ga_lua_component : public ga_component
{

	static int ga_lua_component::lua_entity_translate(lua_State* state);
	static int ga_lua_component::lua_frame_params_get_input_left(lua_State* state);
	static int ga_lua_component::lua_frame_params_get_input_right(lua_State* state);
	static int ga_lua_component::lua_component_get_entity(lua_State* state);
public:
	lua_State* _lua;
	ga_lua_component(class ga_entity* ent, const char* path);
	virtual ~ga_lua_component();

	virtual void update(struct ga_frame_params* params) override;
};
