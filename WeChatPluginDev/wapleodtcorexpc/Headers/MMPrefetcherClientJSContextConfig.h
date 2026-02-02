//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMPrefetcherClientJSContextConfig : NSObject
{
    _Bool _isAdPrefetcherContext;
    NSString *_contextName;
    NSString *_domain;
    NSString *_path;
    NSString *_manifestUrl;
    NSString *_appId;
    long long _basePkgVersion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAdPrefetcherContext; // @synthesize isAdPrefetcherContext=_isAdPrefetcherContext;
@property(nonatomic) long long basePkgVersion; // @synthesize basePkgVersion=_basePkgVersion;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *manifestUrl; // @synthesize manifestUrl=_manifestUrl;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;

@end

