#pragma once

//
#include <aws/core/Aws.h>
// AWS Textract Libraries
#include <aws/textract/TextractClient.h>
#include <aws/textract/model/AnalyzeDocumentRequest.h>
#include <aws/textract/model/AnalyzeDocumentResult.h>
// AWS S3 Libraries
#include <aws/s3/S3Client.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/JSONOutput.h>

// C++ Libraries
#include <string>
#include <iostream>

class OCRService
{
public:
	OCRService();
	~OCRService() {}

	std::string extractWordsFromImage();

private:


	
};

