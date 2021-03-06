#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>


namespace FRW
{
	class FileReaderWrite
	{
	private:
		static std::vector<std::vector<std::string>> m_mapdata;


	public:
		static void Init();


		static bool FileCSVRead(const std::string t_file);
		static const std::vector<std::vector<std::string>>& GetMapData();

		static bool FileCSVWrite(const std::string t_file, const std::vector<std::vector<std::string>>& t_data);
	};
}