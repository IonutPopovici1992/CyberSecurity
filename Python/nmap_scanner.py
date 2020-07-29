# Building An Nmap Scanner - Part 1

import nmap

ns = nmap.PortScanner()

print(ns.nmap_version())

ns.scan('192.168.177.128', '1-1024', '-v')

print(ns.scaninfo())

print(ns.csv())
