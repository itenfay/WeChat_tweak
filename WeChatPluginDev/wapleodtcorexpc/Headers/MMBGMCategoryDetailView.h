//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMCategoryDetailTabViewModel, MMBGMPanelPublishContext, MMBGMSelectedConfig, MMBGMSelectedTabManager, MMUIButton, NSString, UILabel;
@protocol MMBGMCategoryDetailViewDelegate;

@interface MMBGMCategoryDetailView
{
    id <MMBGMCategoryDetailViewDelegate> _delegate;
    MMBGMSelectedTabManager *_tabMgr;
    MMBGMCategoryDetailTabViewModel *_viewModel;
    MMBGMPanelPublishContext *_publishContext;
    MMBGMSelectedConfig *_panelConfig;
    MMUIButton *_closeButton;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMBGMSelectedConfig *panelConfig; // @synthesize panelConfig=_panelConfig;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(retain, nonatomic) MMBGMCategoryDetailTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMBGMSelectedTabManager *tabMgr; // @synthesize tabMgr=_tabMgr;
@property(nonatomic) __weak id <MMBGMCategoryDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bgmSelectedTabManagerGetCurrentMusicData;
- (void)bgmSelectedTabManager:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
- (void)onClickCloseButton:(id)arg1;
- (id)currentSelectedMusicData;
- (void)updateWithBGMCategory:(id)arg1;
- (void)setup;
- (id)genReportDict;
- (void)setupDataReport;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

