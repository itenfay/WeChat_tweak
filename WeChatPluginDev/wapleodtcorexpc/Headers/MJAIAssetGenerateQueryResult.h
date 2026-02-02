//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MJAIAssetGenerateQueryResult : NSObject
{
    unsigned int _nextQueryInterval;
    unsigned int _maxRetryTimes;
    NSArray *_aiAssetURLs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(readonly, nonatomic) unsigned int nextQueryInterval; // @synthesize nextQueryInterval=_nextQueryInterval;
@property(readonly, nonatomic) NSArray *aiAssetURLs; // @synthesize aiAssetURLs=_aiAssetURLs;
- (id)description;
- (id)initWithAIAssetURLs:(id)arg1 nextQueryInterval:(unsigned int)arg2 maxRetryTimes:(unsigned int)arg3;

@end

