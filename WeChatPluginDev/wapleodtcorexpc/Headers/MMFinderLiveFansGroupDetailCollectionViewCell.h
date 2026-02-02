//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveFansGroupInfo, MMFinderLiveFansGroupIntimacyInfo, MMLiveTabsBarView, NSArray, NSMutableArray, NSString, UIScrollView, UITableView, UITableViewCell;
@protocol MMFinderLiveFansGroupDetailCollectionViewCellDelegate;

@interface MMFinderLiveFansGroupDetailCollectionViewCell : UICollectionViewCell
{
    _Bool _shouldAdaptToDarkLight;
    _Bool _needAutoSwitchToRightsTab;
    _Bool _tableViewsAlreadyReset;
    _Bool _hasReportRightsExposed;
    _Bool _hasReportNoticeExposed;
    _Bool _hasReportImageClicked;
    id <MMFinderLiveFansGroupDetailCollectionViewCellDelegate> _cellDelegate;
    UIScrollView *_linkedScrollView;
    UIScrollView *_scrollView;
    NSArray *_tableViews;
    UITableView *_upgradeTableView;
    UITableView *_rightsTableView;
    NSArray *_upgradeInfos;
    long long _currentPage;
    MMLiveTabsBarView *_tabsView;
    NSArray *_rightInfos;
    MMFinderLiveFansGroupIntimacyInfo *_fansIntimacyInfo;
    MMFinderLiveFansGroupInfo *_fansGroupInfo;
    NSMutableArray *_rightsTableInfoSectionCellClasses;
    UITableViewCell *_fansNoticeCell;
    struct CGPoint _tableViewInitialOffset;
    struct CGPoint _tableViewPanLastTranslation;
    struct CGRect _layoutRect;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(nonatomic) __weak UITableViewCell *fansNoticeCell; // @synthesize fansNoticeCell=_fansNoticeCell;
@property(nonatomic) _Bool hasReportImageClicked; // @synthesize hasReportImageClicked=_hasReportImageClicked;
@property(nonatomic) _Bool hasReportNoticeExposed; // @synthesize hasReportNoticeExposed=_hasReportNoticeExposed;
@property(nonatomic) _Bool hasReportRightsExposed; // @synthesize hasReportRightsExposed=_hasReportRightsExposed;
@property(retain, nonatomic) NSMutableArray *rightsTableInfoSectionCellClasses; // @synthesize rightsTableInfoSectionCellClasses=_rightsTableInfoSectionCellClasses;
@property(retain, nonatomic) MMFinderLiveFansGroupInfo *fansGroupInfo; // @synthesize fansGroupInfo=_fansGroupInfo;
@property(retain, nonatomic) MMFinderLiveFansGroupIntimacyInfo *fansIntimacyInfo; // @synthesize fansIntimacyInfo=_fansIntimacyInfo;
@property(retain, nonatomic) NSArray *rightInfos; // @synthesize rightInfos=_rightInfos;
@property(retain, nonatomic) MMLiveTabsBarView *tabsView; // @synthesize tabsView=_tabsView;
@property(nonatomic) _Bool tableViewsAlreadyReset; // @synthesize tableViewsAlreadyReset=_tableViewsAlreadyReset;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) struct CGPoint tableViewPanLastTranslation; // @synthesize tableViewPanLastTranslation=_tableViewPanLastTranslation;
@property(nonatomic) struct CGPoint tableViewInitialOffset; // @synthesize tableViewInitialOffset=_tableViewInitialOffset;
@property(nonatomic) struct CGRect layoutRect; // @synthesize layoutRect=_layoutRect;
@property(retain, nonatomic) NSArray *upgradeInfos; // @synthesize upgradeInfos=_upgradeInfos;
@property(retain, nonatomic) UITableView *rightsTableView; // @synthesize rightsTableView=_rightsTableView;
@property(retain, nonatomic) UITableView *upgradeTableView; // @synthesize upgradeTableView=_upgradeTableView;
@property(retain, nonatomic) NSArray *tableViews; // @synthesize tableViews=_tableViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIScrollView *linkedScrollView; // @synthesize linkedScrollView=_linkedScrollView;
@property(nonatomic) _Bool needAutoSwitchToRightsTab; // @synthesize needAutoSwitchToRightsTab=_needAutoSwitchToRightsTab;
@property(nonatomic) _Bool shouldAdaptToDarkLight; // @synthesize shouldAdaptToDarkLight=_shouldAdaptToDarkLight;
@property(nonatomic) __weak id <MMFinderLiveFansGroupDetailCollectionViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)reportNoticeImageClick;
- (void)reportNoticeCellExposed;
- (void)reportRightsTabExposed;
- (_Bool)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (void)autoSwitchToRightsTabIfNeeded;
- (void)prepareFanRightInfosForDisplay;
- (_Bool)shouldShowAnchorCard;
- (_Bool)shouldShowFanNoticeCell;
- (_Bool)shouldShowUnsubsribe;
- (_Bool)isSuperfan;
- (id)getSuperfanExclusiveItems;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tabsBarView:(id)arg1 didClickTabAtIndex:(unsigned long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetTableViewsExcept:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)setScrollViewToLink:(id)arg1;
- (void)updateWithFansIntimacyInfo:(id)arg1 fansGroupInfo:(id)arg2;
- (void)updateWithUpgradeInfos:(id)arg1;
- (id)buildTableView;
- (void)initUI;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

