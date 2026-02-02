//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSInputStream, NSString;

@interface QBPostDataFile : NSObject
{
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    _Bool _dataReady;
    long long _randomString;
    unsigned long long _streamRead;
    NSInputStream *_fileInput;
    unsigned long long _totalLength;
    unsigned char _buffer[32768];
    int _dataPostType;
    NSString *_filePath;
    NSString *_name;
    NSString *_fileName;
    NSString *_fileType;
    unsigned long long _fileSize;
    double _lastModified;
}

@property(readonly) double lastModified; // @synthesize lastModified=_lastModified;
@property(readonly) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) NSString *fileType; // @synthesize fileType=_fileType;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) NSString *name; // @synthesize name=_name;
@property long long randomString; // @synthesize randomString=_randomString;
@property _Bool dataReady; // @synthesize dataReady=_dataReady;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)createInputStreamForPost;
- (unsigned long long)dataSize;
- (_Bool)shouldUseStreamToSendData;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (unsigned long long)totalLength;
- (unsigned long long)contentInfoStringLength;
- (unsigned long long)contentBoundayStringLength;
- (id)finalPostData;
- (id)contentData;
@property(readonly) NSString *filePath; // @synthesize filePath=_filePath;
- (id)contentPath;
- (id)contentInfoString;
- (id)contentBoundaryString;
@property(nonatomic) int dataPostType; // @synthesize dataPostType=_dataPostType;
- (void)setName:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 fileSize:(unsigned long long)arg4 lastModifiedDate:(double)arg5;
- (id)initWithName:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 fileSize:(unsigned long long)arg4 lastModifiedDate:(double)arg5;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

