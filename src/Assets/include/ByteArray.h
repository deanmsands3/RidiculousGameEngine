#ifndef __BYTE_ARRAY_H__
#define __BYTE_ARRAY_H__

#include <string>
#include <memory>
#include <vector>
class ByteArray{
	unsigned long _length;
	std::shared_ptr<std::vector<char> > _data;
public:
	[[nodiscard]] char* data() const;
	[[nodiscard]] unsigned long length() const;
	ByteArray();
	explicit ByteArray(unsigned long length);
	explicit ByteArray(const std::string& file_name);
	ByteArray(const ByteArray &that);
	~ByteArray();
};

#endif
