//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface QBPostDataBinary : NSObject
{
    int _type;
    _Bool _dataReady;
    long long _randomString;
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    unsigned long long _streamRead;
    NSData *_streamData;
    int _dataPostType;
    NSData *_data;
    NSString *_name;
    NSString *_fileName;
    NSString *_contentType;
}

@property(readonly) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSData *data; // @synthesize data=_data;
@property long long randomString; // @synthesize randomString=_randomString;
@property _Bool dataReady; // @synthesize dataReady=_dataReady;
@property(nonatomic) int dataPostType; // @synthesize dataPostType=_dataPostType;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)createInputStreamForPost;
- (unsigned long long)dataSize;
- (_Bool)shouldUseStreamToSendData;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (id)finalPostData;
- (id)contentData;
- (id)contentInfoString;
- (id)contentBoundaryString;
- (void)setPostData:(id)arg1 name:(id)arg2 fileName:(id)arg3 contentType:(id)arg4;
- (id)initWithData:(id)arg1 name:(id)arg2 fileName:(id)arg3 contentType:(id)arg4;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

