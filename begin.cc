//project_sumo
//21/02/2023
#include "all_in_one.hh"

uintptr_t pointer_to_world;

int errors;
#define signal_problem(i) errors+=i

uintptr_t obtain_world(uintptr_t guarded_region)
{
    //do this yourself. the offsets are already given
}

void cache_memory()//thread
{
    auto obtained_guarded_region = driver::guarded_region();
    if (!obtained_guarded_region) signal_problem(101);

    while (1)
    {
        pointer_to_world = obtain_world(obtained_guarded_region);
        // etc..
    }
}

int main()
{
    std::thread a1(cache_memory);
    a1.detach();

    if (overlay::initialize().was_successful())
    { 
        HWND target = FindWindowA(NULL, xorstr_("VALORANT  ")); 
        overlay::main_loop(target, [](bool is_focused, RECT& game_rect, ImDrawList* render)
            {
                // Ignore the callback when the game is not in focus.
                if (!is_focused)
                {
                    return Sleep(100);
                }

                // Rendering here
                for (int i = 0; i < 1; i++)
                {
                    render->AddRect({ 0.0f, 0.0f }, { (FLOAT)(game_rect.right - game_rect.left), (FLOAT)(game_rect.bottom - game_rect.top) }, D3DCOLOR_RGBA(0, 0, 255, 255));
                }

                ImGui::Begin("Framerate", 0, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);
                ImGui::SetWindowSize(ImVec2(200, 30));
                ImGui::SetWindowPos(ImVec2(15, 80));
                ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
                ImGui::End();
            });
    }
    overlay::cleanup();
}