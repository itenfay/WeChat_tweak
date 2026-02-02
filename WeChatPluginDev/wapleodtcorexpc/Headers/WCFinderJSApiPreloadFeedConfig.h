//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderJSApiPreloadFeedConfig : NSObject
{
    _Bool _forbidenPreload;
    unsigned int _cacheMaxCount;
    double _fetchInterval;
    long long _batchCount;
    long long _penddingMaxCount;
}

@property(nonatomic) unsigned int cacheMaxCount; // @synthesize cacheMaxCount=_cacheMaxCount;
@property(nonatomic) long long penddingMaxCount; // @synthesize penddingMaxCount=_penddingMaxCount;
@property(nonatomic) long long batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) double fetchInterval; // @synthesize fetchInterval=_fetchInterval;
@property(nonatomic) _Bool forbidenPreload; // @synthesize forbidenPreload=_forbidenPreload;
- (_Bool)allowPreload;
- (id)description;
- (id)init;

@end

