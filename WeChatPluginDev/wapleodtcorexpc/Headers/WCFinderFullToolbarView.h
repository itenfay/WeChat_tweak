//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderFeedContentVM;
@protocol WCFinderFullToolbarViewDelegate;

@interface WCFinderFullToolbarView : UIView
{
    unsigned long long _contentStatus;
    id <WCFinderFullToolbarViewDelegate> _delegate;
    unsigned long long _toolBarStyle;
    UIView *_toolbarView;
    WCFinderFeedContentVM *_contentVM;
}

+ (double)defaultHeight;
+ (double)defaultWidthWithToolBarStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) unsigned long long toolBarStyle; // @synthesize toolBarStyle=_toolBarStyle;
@property(nonatomic) __weak id <WCFinderFullToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contentStatus; // @synthesize contentStatus=_contentStatus;
- (void)updateLikeTipsShowState;
- (void)clickRecommendUrl:(id)arg1;
- (id)viewEyeView;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 commentOpenStatueChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)finderFeedUploadingToolBarClickCancel:(id)arg1;
- (void)finderFeedRetryToolBarClickRetry:(id)arg1;
- (void)finderFeedRetryToolBarClickCancel:(id)arg1;
- (void)didClickShareAction:(id)arg1;
- (void)didClickCollectionAction;
- (void)willClickCollectionAction;
- (_Bool)isToolbarEnableClickLike;
- (void)didClickLikeAction:(_Bool)arg1;
- (void)willClickLikeAction:(_Bool)arg1;
- (void)triangleShadowViewHideChanged:(_Bool)arg1;
- (void)finderAuthorClickAllViewBtn;
- (void)finderAuthorClickAllFavAction;
- (void)finderAuthorClickAllLikeAction;
- (void)viewAllCommentAction;
- (void)finderNotRealNameToolBarClickRealNameLink:(id)arg1;
- (void)finderNotRealNameToolBarClickRetry:(id)arg1;
- (void)finderNotRealNameToolBarClickCancel:(id)arg1;
- (id)getAuthorNotRealNameToolBar;
- (id)getCollectionToolbar;
- (id)getAuthorUploadingToolBar;
- (id)getRetryToolBarWithErrorTips:(id)arg1 errorReason:(id)arg2 buttonOptionFlag:(unsigned long long)arg3;
- (id)getEventNotExistFailWithoutRetryToolBar;
- (id)getFileNotExistFailWithoutRetryToolBar;
- (id)getAuthorCDNLargeFailWithoutRetryToolBar;
- (id)getAuthorUploadFailWithoutRetryToolBar;
- (id)getAuthorUploadFailToolBar;
- (id)getAuthorNormalToolBar;
- (id)getLiveNormalToolBar;
- (void)cleanDataEntraceReportData;
- (void)updatePrivateState:(_Bool)arg1;
- (struct CGRect)getLikeButtonItemImageViewFrameOnFullView;
- (void)endExposeAction;
- (void)prepareForReuse;
- (void)initToolbarViewWithStyle:(unsigned long long)arg1;
- (void)cellDidEndDisplayingWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (_Bool)isShowingLikeEducateTips;
- (long long)toolbarEyeStyleForContentVM:(id)arg1;
- (void)updateToolBarWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2 toolbarDisableConfig:(unsigned long long)arg3;
- (void)unRegisterAllKeyExtension;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

