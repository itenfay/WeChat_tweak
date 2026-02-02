//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;
@protocol WCFinderAuthorityListViewModelDelegate, WCFinderAuthorityListViewModelSearchDelegate;

@interface WCFinderBlockPosterViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _searchContinueFlag;
    id <WCFinderAuthorityListViewModelDelegate> delegate;
    id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate;
    NSData *_lastBuff;
    NSMutableArray *_contacts;
    NSArray *_searchResults;
    NSData *_searchBuff;
    NSString *_searchKeyWord;
    NSString *_lastSearchReqeustId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastSearchReqeustId; // @synthesize lastSearchReqeustId=_lastSearchReqeustId;
@property(copy, nonatomic) NSString *searchKeyWord; // @synthesize searchKeyWord=_searchKeyWord;
@property(retain, nonatomic) NSData *searchBuff; // @synthesize searchBuff=_searchBuff;
@property(nonatomic) _Bool searchContinueFlag; // @synthesize searchContinueFlag=_searchContinueFlag;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate; // @synthesize searchDelegate;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelDelegate> delegate; // @synthesize delegate;
- (double)fixDisplayOffsetY;
- (_Bool)isDataEmpty;
- (void)onFinderContactShieldFeedChanged:(id)arg1;
- (_Bool)hasMoreData;
- (_Bool)showSearchBar;
- (_Bool)showAddContactButton;
- (id)titleTips;
- (id)emptyTips;
- (id)guideTips;
- (void)requestNextSearchPageData;
- (_Bool)searchResultHasMoreData;
- (void)searchWithKeyword:(id)arg1;
- (void)batchConfigAddItems:(id)arg1 delItems:(id)arg2;
- (void)requestLoadNextPageData:(_Bool)arg1;
- (void)requestLoadNextPageData;
- (void)requestLoadFirstPageData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

