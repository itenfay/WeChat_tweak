//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLocationAccuracyAuthorizationTipView, MMLocationUISearchBar, NSString, POICorrectionTextView, POITableView, PickLocationManager, WCTimeLineFooterView;
@protocol MMPickLocationActionDelegate;

@interface MMPickLocationContentView : UIView
{
    _Bool _hasLayouted;
    id <MMPickLocationActionDelegate> _actionDelegate;
    MMLocationUISearchBar *_searchBar;
    MMLocationAccuracyAuthorizationTipView *_accuracyAuthorizationTipView;
    POITableView *_searchTableView;
    POICorrectionTextView *_searchErrorTips;
    POITableView *_nearTableView;
    WCTimeLineFooterView *_nearTableFooterView;
    WCTimeLineFooterView *_searchTableFooterView;
    NSString *_searchKeyword;
    PickLocationManager *_pickLocationManager;
    double _errorTipsCenterY;
}

+ (double)heightForTableViewCell;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasLayouted; // @synthesize hasLayouted=_hasLayouted;
@property(nonatomic) double errorTipsCenterY; // @synthesize errorTipsCenterY=_errorTipsCenterY;
@property(nonatomic) __weak PickLocationManager *pickLocationManager; // @synthesize pickLocationManager=_pickLocationManager;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) WCTimeLineFooterView *searchTableFooterView; // @synthesize searchTableFooterView=_searchTableFooterView;
@property(retain, nonatomic) WCTimeLineFooterView *nearTableFooterView; // @synthesize nearTableFooterView=_nearTableFooterView;
@property(retain, nonatomic) POITableView *nearTableView; // @synthesize nearTableView=_nearTableView;
@property(retain, nonatomic) POICorrectionTextView *searchErrorTips; // @synthesize searchErrorTips=_searchErrorTips;
@property(retain, nonatomic) POITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) MMLocationAccuracyAuthorizationTipView *accuracyAuthorizationTipView; // @synthesize accuracyAuthorizationTipView=_accuracyAuthorizationTipView;
@property(retain, nonatomic) MMLocationUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <MMPickLocationActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (id)poiCorrectionKeyWord;
- (void)updateSearchBarAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectAt:(id)arg2;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)makeCell:(id)arg1 forPOIItem:(id)arg2 withWidth:(float)arg3 AndKeyWord:(id)arg4;
- (double)searchTableContentHeightAboveIndex:(unsigned long long)arg1;
- (double)nearbyTableContentHeightAboveIndex:(unsigned long long)arg1;
- (double)tableViewVisibleHeight;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

