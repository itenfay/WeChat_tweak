//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSArray, NSCalendar, NSDate, NSMutableArray, NSString, WCTogetherFriendsListViewSection, WCTogetherHistoryCGI, WCTogetherMoreViewSection;
@protocol WCTogetherHistoryViewModelDelegate;

@interface WCTogetherHistoryViewModel : NSObject
{
    _Bool _showsTogetherFriendsInHeader;
    _Bool _hasMoreItems;
    CContact *_contact;
    id <WCTogetherHistoryViewModelDelegate> _delegate;
    NSString *_title;
    WCTogetherFriendsListViewSection *_headerViewSection;
    WCTogetherMoreViewSection *_moreViewSection;
    NSArray *_viewSections;
    NSMutableArray *_cachedDataItems;
    NSMutableArray *_dataItems;
    unsigned long long _maxFeedID;
    unsigned long long _minFeedID;
    WCTogetherHistoryCGI *_togetherHistoryCGI;
    NSCalendar *_calendarOfDayFormatter;
    NSDate *_today;
    long long _yearOfToday;
    long long _monthOfToday;
    long long _dayOfToday;
    long long _yearOfYesterday;
    long long _monthOfYesterday;
    long long _dayOfYesterday;
    long long _scrollDirection;
    struct CGPoint _lastScrollContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint lastScrollContentOffset; // @synthesize lastScrollContentOffset=_lastScrollContentOffset;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) long long dayOfYesterday; // @synthesize dayOfYesterday=_dayOfYesterday;
@property(nonatomic) long long monthOfYesterday; // @synthesize monthOfYesterday=_monthOfYesterday;
@property(nonatomic) long long yearOfYesterday; // @synthesize yearOfYesterday=_yearOfYesterday;
@property(nonatomic) long long dayOfToday; // @synthesize dayOfToday=_dayOfToday;
@property(nonatomic) long long monthOfToday; // @synthesize monthOfToday=_monthOfToday;
@property(nonatomic) long long yearOfToday; // @synthesize yearOfToday=_yearOfToday;
@property(retain, nonatomic) NSDate *today; // @synthesize today=_today;
@property(retain, nonatomic) NSCalendar *calendarOfDayFormatter; // @synthesize calendarOfDayFormatter=_calendarOfDayFormatter;
@property(retain, nonatomic) WCTogetherHistoryCGI *togetherHistoryCGI; // @synthesize togetherHistoryCGI=_togetherHistoryCGI;
@property(nonatomic) _Bool hasMoreItems; // @synthesize hasMoreItems=_hasMoreItems;
@property(nonatomic) unsigned long long minFeedID; // @synthesize minFeedID=_minFeedID;
@property(nonatomic) unsigned long long maxFeedID; // @synthesize maxFeedID=_maxFeedID;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) NSMutableArray *cachedDataItems; // @synthesize cachedDataItems=_cachedDataItems;
@property(nonatomic) _Bool showsTogetherFriendsInHeader; // @synthesize showsTogetherFriendsInHeader=_showsTogetherFriendsInHeader;
@property(copy, nonatomic) NSArray *viewSections; // @synthesize viewSections=_viewSections;
@property(retain, nonatomic) WCTogetherMoreViewSection *moreViewSection; // @synthesize moreViewSection=_moreViewSection;
@property(retain, nonatomic) WCTogetherFriendsListViewSection *headerViewSection; // @synthesize headerViewSection=_headerViewSection;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCTogetherHistoryViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)friendsListViewItemDidClickFriendsInfo:(id)arg1;
- (void)viewItem:(id)arg1 didClickMediaWithDataItem:(id)arg2 mediaItem:(id)arg3;
- (void)viewItem:(id)arg1 didClickContentDetailWithDataItem:(id)arg2;
- (void)viewItem:(id)arg1 didClickLocationInfoWithDataItem:(id)arg2;
- (void)viewItem:(id)arg1 didClickContactInfoWithDataItem:(id)arg2 contact:(id)arg3;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)getDateText:(id *)arg1 fromDate:(id)arg2;
- (void)getYearText:(id *)arg1 dayText:(id *)arg2 fromDate:(id)arg3;
- (void)updateDatatimeInfo;
- (void)pausePlayingVideos;
- (void)pausePlayingVideoWithViewItem:(id)arg1;
- (void)autoplayVideoInTableView:(id)arg1;
- (void)tableViewDidScroll:(id)arg1;
- (void)didFailToRequestItemsForNextPageWithError:(id)arg1;
- (void)didFinishRequestingItemsForNextPageWithResponse:(id)arg1;
- (void)requestItemsForNextPage;
@property(readonly, nonatomic) _Bool isRequestingItems;
- (void)didReloadData;
- (void)reloadMoreViewSection;
- (void)reloadData;
- (void)updateCachedData;
- (void)loadCachedData;
- (void)loadHeader;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

