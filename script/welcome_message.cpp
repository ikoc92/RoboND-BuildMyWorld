//#include<gazebo-11/gazebo/gazebo.hh>
#include<gazebo/gazebo.hh> 

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Welcome to myworld'!\n");
              printf("Models (except for \"fw_robot\" and \"basic_office\") \n");
              printf("were inserted from http://models.gazebosim.org/\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
