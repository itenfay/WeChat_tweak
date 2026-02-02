//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderJoinLivePrefetchInfo : NSObject
{
    _Bool _usePrefetchCache;
    unsigned long long _fetchType;
    unsigned long long _prefetchCgiRequestTime;
    unsigned long long _consumeCgiRequestTime;
}

@property(nonatomic) unsigned long long consumeCgiRequestTime; // @synthesize consumeCgiRequestTime=_consumeCgiRequestTime;
@property(nonatomic) unsigned long long prefetchCgiRequestTime; // @synthesize prefetchCgiRequestTime=_prefetchCgiRequestTime;
@property(nonatomic) _Bool usePrefetchCache; // @synthesize usePrefetchCache=_usePrefetchCache;
@property(nonatomic) unsigned long long fetchType; // @synthesize fetchType=_fetchType;

@end

