//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WCAppAuthFetchLogic, WCAppAuthOpLogic, WCAppAuthSearchLogic;
@protocol WCAppAuthLogicDelegate;

@interface WCAppAuthLogicController
{
    NSMutableDictionary *_dicFetchResult;
    id <WCAppAuthLogicDelegate> _delegate;
    WCAppAuthFetchLogic *_fetchLogic;
    WCAppAuthSearchLogic *_searchLogic;
    WCAppAuthOpLogic *_opLogic;
    NSMutableArray *_fetchResult;
    NSMutableArray *_searchResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) NSMutableArray *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) WCAppAuthOpLogic *opLogic; // @synthesize opLogic=_opLogic;
@property(retain, nonatomic) WCAppAuthSearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(retain, nonatomic) WCAppAuthFetchLogic *fetchLogic; // @synthesize fetchLogic=_fetchLogic;
@property(nonatomic) __weak id <WCAppAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deletionDidFail:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)deletionDidSucceedForAppId:(id)arg1;
- (void)modificationDidSucceed:(int)arg1;
- (void)modificationDidFailWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)searchDidFinish;
- (void)searchDidSucceedWithApps:(id)arg1;
- (void)searchDidFailWithErrCode:(int)arg1 errMsg:(id)arg2;
- (void)searchWillBeginNewTextSearch;
- (void)fetchDidFinish;
- (void)fetchDidSucceedWithApps:(id)arg1;
- (void)fetchDidFailWithErrCode:(int)arg1 errMsg:(id)arg2;
- (id)getFetchResultItemByAppId:(id)arg1;
- (id)getSearchResultItemByIndex:(unsigned int)arg1;
- (id)getFetchResultItemByIndex:(unsigned int)arg1;
- (void)clearSearchedResult;
- (id)getSearchedAppIds;
- (id)getFetchedAppIds;
- (_Bool)isSearchEnd;
- (_Bool)isSearching;
- (_Bool)isFetchEnd;
- (void)doDeleteApp:(id)arg1 scene:(unsigned int)arg2;
- (void)deleteApp:(id)arg1 scene:(unsigned int)arg2 inView:(id)arg3;
- (void)modifyAppScope:(id)arg1 scope:(id)arg2 Scene:(unsigned int)arg3;
- (void)modifyOAuthLogin:(id)arg1 Scene:(unsigned int)arg2;
- (void)cancelSearch;
- (void)searchApps:(id)arg1;
- (void)fetchList;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

