//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerConfig : NSObject
{
    _Bool _userIsVip;
    _Bool _dataReportEnable;
    _Bool _playerReportEnable;
    _Bool _newReportEnable;
    _Bool _enableCheckLocalServer;
    _Bool _enableCheckLocalServerOnCreate;
    int _checkServerTimeoutMs;
    int _serverCheckTimeInterval;
    NSString *_guid;
    long long _proxyPlatform;
    NSString *_proxyOutNetIP;
    NSString *_userUin;
    NSString *_abUserId;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_appBuildVersion;
    NSString *_userUpc;
    long long _userUpcState;
    long long _platform;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableCheckLocalServerOnCreate; // @synthesize enableCheckLocalServerOnCreate=_enableCheckLocalServerOnCreate;
@property(nonatomic) _Bool enableCheckLocalServer; // @synthesize enableCheckLocalServer=_enableCheckLocalServer;
@property(nonatomic) int serverCheckTimeInterval; // @synthesize serverCheckTimeInterval=_serverCheckTimeInterval;
@property(nonatomic) int checkServerTimeoutMs; // @synthesize checkServerTimeoutMs=_checkServerTimeoutMs;
@property _Bool newReportEnable; // @synthesize newReportEnable=_newReportEnable;
@property _Bool playerReportEnable; // @synthesize playerReportEnable=_playerReportEnable;
@property _Bool dataReportEnable; // @synthesize dataReportEnable=_dataReportEnable;
@property long long platform; // @synthesize platform=_platform;
@property long long userUpcState; // @synthesize userUpcState=_userUpcState;
@property(retain) NSString *userUpc; // @synthesize userUpc=_userUpc;
@property(retain) NSString *appBuildVersion; // @synthesize appBuildVersion=_appBuildVersion;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NSString *abUserId; // @synthesize abUserId=_abUserId;
@property _Bool userIsVip; // @synthesize userIsVip=_userIsVip;
@property(retain) NSString *userUin; // @synthesize userUin=_userUin;
@property(retain) NSString *proxyOutNetIP; // @synthesize proxyOutNetIP=_proxyOutNetIP;
@property long long proxyPlatform; // @synthesize proxyPlatform=_proxyPlatform;
@property(retain) NSString *guid; // @synthesize guid=_guid;

@end

