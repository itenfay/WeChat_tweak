//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSStreamDelegate-Protocol.h"

@class NSData, NSInputStream, NSObject, NSString;
@protocol QBPostDataProtocol;

@protocol QBPostDataProtocol <NSStreamDelegate>
@property long long randomString;
@property _Bool dataReady;
@property(nonatomic) int dataPostType;
- (unsigned long long)dataSize;
- (_Bool)shouldUseStreamToSendData;
- (NSInputStream *)createInputStreamForPost;
- (NSData *)finalPostData;

@optional
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
- (void)fillDataFromAnotherInstance:(NSObject<QBPostDataProtocol> *)arg1;
- (NSString *)contentInfoString;
- (NSString *)contentBoundaryString;
- (NSData *)contentData;
@end

