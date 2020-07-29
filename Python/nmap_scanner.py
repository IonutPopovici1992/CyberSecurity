# Building An Nmap Scanner - Part 1

import nmap

ns = nmap.PortScanner()

print(ns.nmap_version())

ns.scan('192.168.177.128', '1-1024', '-v --version-all')

# print(ns.scaninfo())

# print(ns.csv())

print(ns.scanstats())

# print(ns.all_hosts())

# print(ns['192.168.177.128'].state())

# print(ns['192.168.177.128'].all_protocols())

# print(ns['192.168.177.128']['tcp'].keys())

print(ns['192.168.177.128'].has_tcp(80))
