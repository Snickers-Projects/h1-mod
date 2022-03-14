#pragma once
#include "game/game.hpp"

namespace party
{
	void reset_connect_state();

	void connect(const game::netadr_s& target);
	void start_map(const std::string& mapname);

	void clear_sv_motd();
	game::netadr_s get_current_server_info();
	int server_client_count();

	int get_client_num_by_name(const std::string& name);

	int get_client_count();
	int get_bot_count();
}