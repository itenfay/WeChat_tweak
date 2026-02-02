//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveFansGroupAnchorEditViewModel, MMFinderLiveFansGroupManageNavBar, MMFinderLiveFansGroupMemberLogic, MMFinderLiveFansGroupMemberTableHeaderView, MMFinderLiveFansGroupMemberTableViewModel, MMFinderLiveTaskId, MMTableView, MMUILabel, NSString, UIColor, UIImageView, WCTimeLineFooterView;

@interface MMFinderLiveFansGroupManageContentView : UIView
{
    MMTableView *_fansGroupMemberTableView;
    CDUnknownBlockType _closeActionCallBack;
    CDUnknownBlockType _modifyActionCallBack;
    MMFinderLiveFansGroupManageNavBar *_navBar;
    MMFinderLiveFansGroupMemberTableViewModel *_fansGroupMemberTableViewModel;
    MMUILabel *_noMemberTipLabel;
    MMFinderLiveFansGroupMemberTableHeaderView *_headerView;
    WCTimeLineFooterView *_footerView;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveFansGroupMemberLogic *_fetchLogic;
    UIColor *_navBarBGColor;
    NSString *_fansGroupName;
    MMFinderLiveFansGroupAnchorEditViewModel *_anchorEditViewModel;
    UIImageView *_superfanTableHeaderBGImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *superfanTableHeaderBGImageView; // @synthesize superfanTableHeaderBGImageView=_superfanTableHeaderBGImageView;
@property(retain, nonatomic) MMFinderLiveFansGroupAnchorEditViewModel *anchorEditViewModel; // @synthesize anchorEditViewModel=_anchorEditViewModel;
@property(retain, nonatomic) NSString *fansGroupName; // @synthesize fansGroupName=_fansGroupName;
@property(retain, nonatomic) UIColor *navBarBGColor; // @synthesize navBarBGColor=_navBarBGColor;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberLogic *fetchLogic; // @synthesize fetchLogic=_fetchLogic;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMUILabel *noMemberTipLabel; // @synthesize noMemberTipLabel=_noMemberTipLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupMemberTableViewModel *fansGroupMemberTableViewModel; // @synthesize fansGroupMemberTableViewModel=_fansGroupMemberTableViewModel;
@property(retain, nonatomic) MMFinderLiveFansGroupManageNavBar *navBar; // @synthesize navBar=_navBar;
@property(copy, nonatomic) CDUnknownBlockType modifyActionCallBack; // @synthesize modifyActionCallBack=_modifyActionCallBack;
@property(copy, nonatomic) CDUnknownBlockType closeActionCallBack; // @synthesize closeActionCallBack=_closeActionCallBack;
@property(retain, nonatomic) MMTableView *fansGroupMemberTableView; // @synthesize fansGroupMemberTableView=_fansGroupMemberTableView;
- (void)onFansGroupMemberTableNeedRefreshWithMemberType:(unsigned long long)arg1 groupType:(unsigned long long)arg2;
- (void)onFansGroupMemberTableDidScroll;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (_Bool)superfanEnabled;
- (void)gotoEnableSuperfanPage;
- (void)createTableHeaderView;
- (void)layoutTableHeaderView;
- (void)updateNoMemberTipText;
- (void)createNoMemberTipLabel;
- (void)layoutNoMemberTipLabel;
- (void)updateFooterView:(unsigned long long)arg1;
- (id)createFansGroupMemberTableFooterView;
- (void)updateTableHeaderBG;
- (void)layoutFansGroupMemberTableView;
- (void)layoutNavBar;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)hideNoMemberTipLabel;
- (void)showNoMemberTipLabel;
- (void)refreshFansGroupName;
- (void)createFetchLogic;
- (void)updateNavRightButton;
- (void)updateUIForKeyBoardShow:(_Bool)arg1 keyBoardHeight:(double)arg2;
- (_Bool)isSelfFirstResponder;
- (void)refreshAnchorEditInfo;
- (unsigned long long)getSortType;
- (unsigned long long)getFilterType;
- (void)refreshFansGroupInfo;
- (void)innerInit;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

