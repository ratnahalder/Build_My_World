#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginWelcomeMessage : public WorldPlugin
  {
    public: WorldPluginWelcomeMessage() : WorldPlugin()
            {
              printf("Welcome to Ratna's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcomeMessage)
}
