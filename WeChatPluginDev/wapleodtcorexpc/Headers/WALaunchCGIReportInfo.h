//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WALaunchCGIReportInfo : NSObject
{
    unsigned int _debugType;
    unsigned int _appVersion;
    unsigned int _scene;
    unsigned int _appServiceType;
    unsigned int _requestType;
    NSString *_appId;
    long long _beginTime;
    NSString *_username;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) unsigned int debugType; // @synthesize debugType=_debugType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

