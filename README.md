# Reverse Engineering Tutorials

Kho ghi chú học Reverse Engineering, được sắp xếp theo từng tutorial trong thư mục `tutorials/`.

## Cấu trúc

```text
.
|-- README.md
|-- tutorials/
|   |-- 01-what-is-reverse-engineering/
|   |-- 02-intro-to-olly-debug/
|   `-- ...
|-- .gitattributes
`-- .gitignore
```

Mỗi thư mục tutorial thường có:

- `writeup.md`: ghi chú và hướng dẫn chính.
- `images/`: ảnh minh họa dùng trong writeup.
- `materials/`: file thực hành đi kèm như crackme, PDF, ZIP hoặc tài liệu nguồn.
- `solution.md`: lời giải bổ sung nếu bài có tách riêng.

## Lưu ý

Repo này phục vụ mục đích học tập và phân tích trong môi trường lab. Một số file trong `materials/` là binary mẫu dùng cho reverse engineering, vì vậy trình antivirus hoặc GitHub có thể cảnh báo. Chỉ chạy các file này trong máy ảo hoặc môi trường cô lập.

Các file local như workspace của editor, cache agent, database IDA/Ghidra, file dump, binary phát sinh mới và thư mục `_local/` đã được đưa vào `.gitignore`.

## Mục lục

1. [Tutorial 01 - What is Reverse Engineering](<tutorials/01-what-is-reverse-engineering/writeup.md>)
2. [Tutorial 02 - Intro to Olly Debug](<tutorials/02-intro-to-olly-debug/writeup.md>)
3. [Tutorial 03 - Using OllyDBG Part 1](<tutorials/03-using-ollydbg-part-1/writeup.md>)
4. [Tutorial 04 - Using Olly Part 2](<tutorials/04-using-olly-part-2/writeup.md>)
5. [Tutorial 05 - Our First Sort Of Crack](<tutorials/05-our-first-sort-of-crack/writeup.md>)
6. [Tutorial 06 - Our First True Crack](<tutorials/06-our-first-true-crack/writeup.md>)
7. [Tutorial 07 - More Crackmes](<tutorials/07-more-crackmes/writeup.md>)
8. [Tutorial 08 - Frame Of Reference](<tutorials/08-frame-of-reference/writeup.md>)
9. [Tutorial 09 - No Strings Attached](<tutorials/09-no-strings-attached/writeup.md>)
10. [Tutorial 10 - The Levels Of Patching](<tutorials/10-the-levels-of-patching/writeup.md>)
11. [Tutorial 11 - Breaking In Our Noob Skills](<tutorials/11-breaking-in-our-noob-skills/writeup.md>)
12. [Tutorial 12 - A Tougher NOOBy Example](<tutorials/12-a-tougher-nooby-example/writeup.md>)
13. [Tutorial 13 - Cracking a Real Program](<tutorials/13-cracking-a-real-program/writeup.md>)
14. [Tutorial 14 - How to Remove Nag Screens](<tutorials/14-how-to-remove-nag-screens/writeup.md>)
15. [Tutorial 15 - Using The Call Stack](<tutorials/15-using-the-call-stack/writeup.md>)
16. [Tutorial 16A - Dealing With Windows Messages](<tutorials/16a-dealing-with-windows-messages/writeup.md>)
17. [Tutorial 16B - Self Modifying Code](<tutorials/16b-self-modifying-code/writeup.md>)
18. [Tutorial 16C - Bruteforcing](<tutorials/16c-bruteforcing/writeup.md>)
19. [Tutorial 17 - Working With Delphi Binaries](<tutorials/17-working-with-delphi-binaries/writeup.md>)
20. [Tutorial 18 - Time Trials and Memory Breakpoints](<tutorials/18-time-trials-and-memory-breakpoints/writeup.md>)
21. [Tutorial 19 - Patchers](<tutorials/19-patchers/writeup.md>)
22. [Tutorial 20A - Working With Visual Basic Binaries](<tutorials/20a-working-with-visual-basic-binaries/writeup.md>)
23. [Tutorial 20B - Working With Basic Binaries](<tutorials/20b-working-with-basic-binaries/writeup.md>)
