//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface QBWupBrowserInfo : NSObject
{
    NSString *_QUA2;
    NSString *_QGUID;
    NSString *_QUA;
    char *_hexGuid;
    char *_guid;
    NSString *_UUID;
    NSString *_qAuth;
    NSString *_userAgent;
    long long _timestamp;
    NSString *_contentMd5;
    NSData *_innerGuidData;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedBrowserInfo;
+ (id)filePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSData *innerGuidData; // @synthesize innerGuidData=_innerGuidData;
@property(retain) NSString *contentMd5; // @synthesize contentMd5=_contentMd5;
@property long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *qAuth; // @synthesize qAuth=_qAuth;
@property(retain) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)invalidateServerUrl:(id)arg1;
- (id)serverUrl;
- (void)resetGuid;
- (void)setQUA:(id)arg1;
- (id)QUA;
- (void)setQUA2:(id)arg1;
- (id)QUA2;
- (id)QGUID;
- (void)dealloc;
- (void)saveToFile;
@property(readonly, nonatomic) _Bool isGuidValid;
@property(readonly, nonatomic) NSData *guidData;
@property(readonly, nonatomic) NSString *hexGuidString;
@property(readonly, nonatomic) char *hexGuid; // @synthesize hexGuid=_hexGuid;
@property(nonatomic) char *guid; // @synthesize guid=_guid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

