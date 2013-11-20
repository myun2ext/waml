#ifndef __github_com_myun2__waml__document_HPP__
#define __github_com_myun2__waml__document_HPP__

#include "myun2/waml/document/array.hpp"
#include "myun2/waml/document/hash.hpp"

#include <string>
#include <vector>

namespace myun2
{
	namespace waml
	{
		struct sub_document
		{
		};

		struct document
		{
			typedef ::std::string string;
			string title;
			::std::vector<sub_document> sub_documents;
		};
	}
}

#endif//__github_com_myun2__waml__document_HPP__
