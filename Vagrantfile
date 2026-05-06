Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/jammy64"
  config.vm.hostname = "formatter-lab"
  config.vm.synced_folder ".", "/workspace"

  config.vm.provision "shell", inline: <<-SHELL
    apt-get update
    DEBIAN_FRONTEND=noninteractive apt-get install -y cmake g++ make git
    cd /workspace
    cmake -S . -B _build -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF
    cmake --build _build
  SHELL
end
