//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSInputStream, NSMutableArray, NSString;

@interface QBPostDataFormElement : NSObject
{
    int _dataPostType;
    NSString *_postBoundaryString;
    _Bool _dataReady;
    long long _randomString;
    NSMutableArray *_elementArray;
    unsigned long long _streamRead;
    unsigned long long _suffixRead;
    unsigned long long _fileRead;
    NSMutableArray *_streamFiles;
    NSData *_streamData;
    _Bool _dataSorted;
    NSInputStream *_fileInput;
    unsigned long long _currentFileIndex;
    unsigned char _buffer[32768];
}

@property long long randomString; // @synthesize randomString=_randomString;
@property _Bool dataReady; // @synthesize dataReady=_dataReady;
@property(nonatomic) int dataPostType; // @synthesize dataPostType=_dataPostType;
- (void).cxx_destruct;
- (unsigned long long)dataSize;
- (unsigned long long)contentInfoStringLength:(id)arg1;
- (unsigned long long)contentBoundayStringLength;
- (_Bool)readFilesStreamFinished:(id)arg1;
- (void)getStreamData;
- (void)multipartFormDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)URLEncodedDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)createInputStreamForPost;
- (void)sortContentElement;
- (id)streamFiles;
- (_Bool)shouldUseStreamToSendData;
- (id)finalPostData;
- (id)archiveURLEncodedData;
- (id)archiveMultipartFormData;
- (void)resetElements:(id)arg1;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (id)contentData;
- (id)contentBoundaryString;
@property(readonly, copy) NSArray *elements;
- (void)addElement:(id)arg1;
- (id)initWithElements:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

