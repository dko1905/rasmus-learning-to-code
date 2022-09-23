{ pkgs ? import <nixpkgs> { } }:
pkgs.mkShell {
  packages = with pkgs; [
    clangStdenv
    bear
    clang
    clang-tools
  ];
}

