//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface QBPostDataString : NSObject
{
    int _dataPostType;
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    _Bool _dataReady;
    long long _randomString;
    unsigned long long _streamRead;
    NSData *_streamData;
    NSString *_dataString;
    NSString *_name;
    NSString *_encodeType;
}

@property(readonly) NSString *encodeType; // @synthesize encodeType=_encodeType;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *dataString; // @synthesize dataString=_dataString;
@property long long randomString; // @synthesize randomString=_randomString;
@property _Bool dataReady; // @synthesize dataReady=_dataReady;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)createInputStreamForPost;
- (unsigned long long)dataSize;
- (_Bool)shouldUseStreamToSendData;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (id)finalPostData;
- (id)contentInfoString;
- (id)contentBoundaryString;
- (id)contentData;
@property(nonatomic) int dataPostType;
- (void)setDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;
- (id)initWithDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

