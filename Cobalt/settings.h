#pragma once

#include <string>
#include <atomic>

enum class ECobaltUsage
{
    Private,
    Hybrid,
    // RecordingRequests // todo?
};

// Global configuration variables
inline std::string dllPath = "C:\\Users\\Administrator\\Downloads\\Gameserver.dll";
inline std::atomic<bool> bIsHosting{ false };
inline std::string urlToTraceForInject = "/fortnite/api/storefront/v2/catalog";

// HTTP configuration
#define URL_PROTOCOL "http"
#define URL_HOST "147.185.221.17"
#define URL_PORT "63889"

// Uncomment to use MinHook if injecting late
// #define USE_MINHOOK

// Uncomment to show a Windows console
#define SHOW_WINDOWS_CONSOLE

constexpr ECobaltUsage CobaltUsage = ECobaltUsage::Private;
constexpr bool bIsS13Epic = false; // S13 Hybrid Windows -> iOS fake