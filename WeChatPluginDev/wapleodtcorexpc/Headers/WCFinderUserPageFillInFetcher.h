//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderProfileUserPageFetcher;

@interface WCFinderUserPageFillInFetcher : NSObject
{
    id <WCFinderProfileUserPageFetcher> _fetcher;
    unsigned long long _count;
}

+ (id)fetcherWithInner:(id)arg1 ensureCount:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) id <WCFinderProfileUserPageFetcher> fetcher; // @synthesize fetcher=_fetcher;
- (id)startFetch:(id)arg1 data:(id)arg2 retryCount:(long long)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)userpageWithParams:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

