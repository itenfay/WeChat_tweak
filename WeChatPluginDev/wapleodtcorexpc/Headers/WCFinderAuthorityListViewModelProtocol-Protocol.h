//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol WCFinderAuthorityListViewModelDelegate, WCFinderAuthorityListViewModelSearchDelegate;

@protocol WCFinderAuthorityListViewModelProtocol <NSObject>
@property(readonly, nonatomic) NSArray *contacts;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelDelegate> delegate;
- (_Bool)hasMoreData;
- (_Bool)showAddContactButton;
- (NSString *)accessibilityLabelText;
- (NSString *)titleTips;
- (NSString *)emptyTips;
- (NSString *)guideTips;
- (void)batchConfigAddItems:(NSArray *)arg1 delItems:(NSArray *)arg2;
- (void)requestLoadNextPageData;
- (void)requestLoadFirstPageData;

@optional
- (void)onPop;
- (double)fixDisplayOffsetY;
- (void)requestNextSearchPageData;
- (void)searchWithKeyword:(NSString *)arg1;
- (_Bool)searchResultHasMoreData;
- (_Bool)isDataEmpty;
@end

