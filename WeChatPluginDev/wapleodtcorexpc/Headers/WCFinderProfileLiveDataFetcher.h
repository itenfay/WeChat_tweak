//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderStreamLoadingState;

@interface WCFinderProfileLiveDataFetcher : NSObject
{
    _Bool _isAuthor;
    _Bool _isRequestingFristPage;
    unsigned long long _refreshTime;
    WCFinderStreamLoadingState *_loadingState;
    NSString *_username;
    CDUnknownBlockType _feedMapper;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRequestingFristPage; // @synthesize isRequestingFristPage=_isRequestingFristPage;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(copy, nonatomic) CDUnknownBlockType feedMapper; // @synthesize feedMapper=_feedMapper;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderStreamLoadingState *loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
- (void)profileRequestFirstPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)profileRequestNextPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)profileLoadingState;
- (void)_requestPage:(id)arg1 firstPage:(_Bool)arg2 compelte:(CDUnknownBlockType)arg3;
- (void)requestNextPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)requestFirstPage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

