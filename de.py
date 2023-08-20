
import dns.resolver
import re

domain = "quest.squadcast.tech"
txt_records = dns.resolver.resolve(domain, 'TXT')
ipv6_address = None
ipv6_pattern = re.compile(r"ip6:[\da-fA-F:]+")

for record in txt_records:
    txt_data = record.strings[0].decode()
    if txt_data.startswith('"') and txt_data.endswith('"'):
        txt_data = txt_data[1:-1]
    match = re.search(ipv6_pattern, txt_data)
    if match:
        ipv6_address = match.group(0)[4:] 
        break
if ipv6_address:
    print("IPv6 address:", ipv6_address)
else:
    print("No IPv6 address found in the TXT records.")



