//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPDLProxyInitParam : NSObject
{
    _Bool _enableCheckLocalServer;
    _Bool _enableCheckLocalServerOnCreate;
    int _platform;
    int _checkTimeout;
    int _localServerCheckTimeInterval;
    NSString *_appVer;
    NSString *_guid;
    NSString *_cacheDir;
    NSString *_dataDir;
    NSString *_configStr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableCheckLocalServerOnCreate; // @synthesize enableCheckLocalServerOnCreate=_enableCheckLocalServerOnCreate;
@property(nonatomic) _Bool enableCheckLocalServer; // @synthesize enableCheckLocalServer=_enableCheckLocalServer;
@property(nonatomic) int localServerCheckTimeInterval; // @synthesize localServerCheckTimeInterval=_localServerCheckTimeInterval;
@property(nonatomic) int checkTimeout; // @synthesize checkTimeout=_checkTimeout;
@property(copy, nonatomic) NSString *configStr; // @synthesize configStr=_configStr;
@property(copy, nonatomic) NSString *dataDir; // @synthesize dataDir=_dataDir;
@property(copy, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *appVer; // @synthesize appVer=_appVer;
@property(nonatomic) int platform; // @synthesize platform=_platform;
- (id)initWithPlatform:(int)arg1 appVer:(id)arg2 guid:(id)arg3 cacheDir:(id)arg4 dataDir:(id)arg5 configStr:(id)arg6;
- (id)initWithPlatform:(int)arg1 appVer:(id)arg2 guid:(id)arg3 dataDir:(id)arg4;
- (id)initWithPlatform:(int)arg1 appVer:(id)arg2 guid:(id)arg3;

@end

