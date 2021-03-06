#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Flint {

	class FLINT_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define FL_CORE_TRACE(...) ::Flint::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FL_CORE_INFO(...)  ::Flint::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FL_CORE_WARN(...)  ::Flint::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FL_CORE_ERROR(...) ::Flint::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FL_CORE_FATAL(...) ::Flint::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define FL_TRACE(...) ::Flint::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FL_INFO(...)  ::Flint::Log::GetClientLogger()->info(__VA_ARGS__)
#define FL_WARN(...)  ::Flint::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FL_ERROR(...) ::Flint::Log::GetClientLogger()->error(__VA_ARGS__)
#define FL_FATAL(...) ::Flint::Log::GetClientLogger()->fatal(__VA_ARGS__)