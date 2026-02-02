//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol QBBeaconAnaNSObjTransToJceBufferProtocol;

@interface QBBeaconRequestPackage : NSObject
{
    BOOL platformId;
    BOOL encryType;
    BOOL zipType;
    int cmd;
    int _eventCnt;
    NSString *appkey;
    NSString *appVersion;
    NSString *sdkId;
    NSString *sdkVersion;
    id <QBBeaconAnaNSObjTransToJceBufferProtocol> sBuffer;
    NSString *osVer;
    NSString *model;
    NSString *reserved;
}

+ (id)initWithData:(id)arg1 cmd:(int)arg2 sBuffer:(id)arg3;
@property(nonatomic) int eventCnt; // @synthesize eventCnt=_eventCnt;
@property(retain, nonatomic) NSString *reserved; // @synthesize reserved;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *osVer; // @synthesize osVer;
@property(retain, nonatomic) id <QBBeaconAnaNSObjTransToJceBufferProtocol> sBuffer; // @synthesize sBuffer;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) NSString *sdkId; // @synthesize sdkId;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey;
@property(nonatomic) BOOL zipType; // @synthesize zipType;
@property(nonatomic) BOOL encryType; // @synthesize encryType;
@property(nonatomic) BOOL platformId; // @synthesize platformId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createWUPModel;

@end

