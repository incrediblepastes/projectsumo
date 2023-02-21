#include <cstddef>
namespace offsets
{
	const std::ptrdiff_t uworld_state = 0x9182500;
	const std::ptrdiff_t uworld_key = uworld_state + 0x38;

	const std::ptrdiff_t gobject_state = 0x8feff00;
	const std::ptrdiff_t gobject_key = gobject_state + 0x38;

	const std::ptrdiff_t gdynamic_rhi = 0x910c258;

	const std::ptrdiff_t fnamepool = 0x8fb54c0;
	const std::ptrdiff_t fnamepool_state = 0x8fe8480;
	const std::ptrdiff_t fnamepool_key = fnamepool_state + 0x38;
	const std::ptrdiff_t fnamepool_decrypt_wide = 0x31c2a30;
	const std::ptrdiff_t fnamepool_decrypt_non_wide = 0x31c29c0;

	const std::ptrdiff_t static_load_object = 0x34453a0;
	const std::ptrdiff_t static_find_object = 0x34435a0;
	const std::ptrdiff_t line_of_sight = 0x4abca90;
	const std::ptrdiff_t bone_matrix = 0x4a893b0;
	const std::ptrdiff_t project_world_to_screen = 0x4bd4300;
	const std::ptrdiff_t get_actor_bounds = 0x486cc80;
	const std::ptrdiff_t process_event = 0x3405390;
	const std::ptrdiff_t trigger_veh = 0x1c15c00;
	const std::ptrdiff_t free_memory = 0x30cb7e0;

	const std::ptrdiff_t get_firing_location = 0x296a090;
	const std::ptrdiff_t get_spread_angles = 0x2b26ce0;
	const std::ptrdiff_t get_spread_values = 0x2489e40;
	const std::ptrdiff_t to_vector_and_normalize = 0x314b130;
	const std::ptrdiff_t to_angle_and_normalize = 0x3145030;

	const std::ptrdiff_t k2_draw_line = 0x50ed260;
	const std::ptrdiff_t k2_draw_text = 0x50ed7a0;
	const std::ptrdiff_t k2_draw_box = 0x50ed1a0;
}