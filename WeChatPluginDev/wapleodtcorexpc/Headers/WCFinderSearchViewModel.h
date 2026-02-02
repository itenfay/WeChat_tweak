//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderSearchSecurityTips, NSArray, NSString, WCFinderBaseCgi, WCFinderSearchItemReportQueue;
@protocol WCFinderSearchViewModelDelegate;

@interface WCFinderSearchViewModel : NSObject
{
    _Bool _notShowSectionHeader;
    _Bool _alreadyInputInputText;
    id <WCFinderSearchViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    NSString *_searchSessionid;
    FinderSearchSecurityTips *_securityTips;
    WCFinderBaseCgi *_searchCGI;
    NSString *_latestQueryText;
    unsigned long long _searchSourceType;
    NSArray *_displaySections;
    WCFinderSearchItemReportQueue *_itemReportQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alreadyInputInputText; // @synthesize alreadyInputInputText=_alreadyInputInputText;
@property(retain, nonatomic) WCFinderSearchItemReportQueue *itemReportQueue; // @synthesize itemReportQueue=_itemReportQueue;
@property(retain, nonatomic) NSArray *displaySections; // @synthesize displaySections=_displaySections;
@property(nonatomic) unsigned long long searchSourceType; // @synthesize searchSourceType=_searchSourceType;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(retain, nonatomic) WCFinderBaseCgi *searchCGI; // @synthesize searchCGI=_searchCGI;
@property(readonly, nonatomic) FinderSearchSecurityTips *securityTips; // @synthesize securityTips=_securityTips;
@property(nonatomic) _Bool notShowSectionHeader; // @synthesize notShowSectionHeader=_notShowSectionHeader;
@property(copy, nonatomic) NSString *searchSessionid; // @synthesize searchSessionid=_searchSessionid;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <WCFinderSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportHasInputSearchText;
- (void)report22878DataWithFeedID:(id)arg1 feedPos:(long long)arg2 isClickAction:(_Bool)arg3 isVideoFeed:(_Bool)arg4;
- (void)loadNextPageData;
- (_Bool)hasMoreData;
- (long long)indexOfTid:(id)arg1;
- (unsigned long long)dataCount;
- (id)contentVMOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMOfSearchItem:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(id)arg1;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(_Bool)arg2;
- (id)getCustomUdfKvJsonStr;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)sectionForType:(long long)arg1;
- (id)searchInfoAtIndexPath:(id)arg1;
- (_Bool)isSearchFeedItemEmpty;
- (_Bool)isSearchDataItemSection:(unsigned long long)arg1;
- (_Bool)isSearchInfoSection:(unsigned long long)arg1;
- (_Bool)isSearchInfoCountGreaterThanMax;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (_Bool)hasSearchContent;
- (long long)dataItemSection;
- (void)resetSearchStatus;
- (id)generateSearchListViewModelWithHotWord:(id)arg1 hotWordList:(id)arg2 lastBuffer:(id)arg3;
- (id)generateSearchlistViewModel;
- (id)generateSearchContactViewModel;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (id)selectedTab;
- (void)changeSelctedFeedTab:(id)arg1;
- (void)_afterQueryNextPageFeedAppendDatas:(id)arg1 toTab:(id)arg2;
- (void)_queryNextPageFeed:(int)arg1;
- (void)_queryNextPageContact:(int)arg1;
- (void)onQueryNextPageDataItem:(int)arg1;
- (void)onQueryNextPageDataItem;
- (void)queryContactWith:(id)arg1 sessionBuf:(id)arg2 scene:(unsigned long long)arg3;
- (void)queryContactWith:(id)arg1;
- (void)updateSearchSourceType:(unsigned long long)arg1;
- (_Bool)isRepetSearch:(id)arg1;
- (void)resetDatas;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

