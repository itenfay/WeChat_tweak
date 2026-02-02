//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMemStatInfo : NSObject
{
    _Bool _isCache;
    unsigned int _appVersion;
    unsigned int _openSeq;
    unsigned int _lastTimeEnterBg;
    NSString *_appID;
    long long _processMemUsedWhenLaunch;
}

- (void).cxx_destruct;
@property(nonatomic) long long processMemUsedWhenLaunch; // @synthesize processMemUsedWhenLaunch=_processMemUsedWhenLaunch;
@property(nonatomic) unsigned int lastTimeEnterBg; // @synthesize lastTimeEnterBg=_lastTimeEnterBg;
@property(nonatomic) unsigned int openSeq; // @synthesize openSeq=_openSeq;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;

@end

