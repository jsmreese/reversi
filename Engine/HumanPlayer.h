#pragma once

#include <string>
#include "PlayerInterface.h"

namespace reversi {

	/**
	* HumanPlayer
	*
	* Concrete player class for human players.
	*
	*/
	class HumanPlayer : public PlayerInterface
	{
	public:
		HumanPlayer();

		virtual ~HumanPlayer();

		virtual std::string promptInput(Engine& engine, ViewInterface& view, bool isGameOver = false);
	};

}