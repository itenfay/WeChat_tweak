//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCVideoProducerPreloadConfigs : NSObject
{
    long long _maxConcurrencyLimit;
    long long _maxCacheSizeLimit;
    long long _templateBufferCount;
    long long _musicBufferCount;
    unsigned long long _preloadRules;
}

+ (id)createFromConfigJson:(id)arg1;
@property(nonatomic) unsigned long long preloadRules; // @synthesize preloadRules=_preloadRules;
@property(nonatomic) long long musicBufferCount; // @synthesize musicBufferCount=_musicBufferCount;
@property(nonatomic) long long templateBufferCount; // @synthesize templateBufferCount=_templateBufferCount;
@property(nonatomic) long long maxCacheSizeLimit; // @synthesize maxCacheSizeLimit=_maxCacheSizeLimit;
@property(nonatomic) long long maxConcurrencyLimit; // @synthesize maxConcurrencyLimit=_maxConcurrencyLimit;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

