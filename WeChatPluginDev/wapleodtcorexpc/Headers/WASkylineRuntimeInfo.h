//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WASkylineRuntimeInfo : NSObject
{
    _Bool _cronetEnable;
    _Bool _cronetSimpleDiskCache;
    _Bool _enableResizeImage;
    _Bool _enableNewSvgImage;
    NSString *_appId;
    NSString *_clientVersion;
    NSString *_sessionId;
    NSString *_instanceId;
    unsigned long long _appVersion;
    unsigned long long _debugModeType;
    unsigned long long _appServiceType;
    NSString *_cronetCachePath;
    NSString *_httpUserAgent;
    NSString *_httpReferer;
    NSDictionary *_performanceConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *performanceConfig; // @synthesize performanceConfig=_performanceConfig;
@property(retain, nonatomic) NSString *httpReferer; // @synthesize httpReferer=_httpReferer;
@property(retain, nonatomic) NSString *httpUserAgent; // @synthesize httpUserAgent=_httpUserAgent;
@property(nonatomic) _Bool enableNewSvgImage; // @synthesize enableNewSvgImage=_enableNewSvgImage;
@property(nonatomic) _Bool enableResizeImage; // @synthesize enableResizeImage=_enableResizeImage;
@property(retain, nonatomic) NSString *cronetCachePath; // @synthesize cronetCachePath=_cronetCachePath;
@property(nonatomic) _Bool cronetSimpleDiskCache; // @synthesize cronetSimpleDiskCache=_cronetSimpleDiskCache;
@property(nonatomic) _Bool cronetEnable; // @synthesize cronetEnable=_cronetEnable;
@property(nonatomic) unsigned long long appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) unsigned long long debugModeType; // @synthesize debugModeType=_debugModeType;
@property(nonatomic) unsigned long long appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

