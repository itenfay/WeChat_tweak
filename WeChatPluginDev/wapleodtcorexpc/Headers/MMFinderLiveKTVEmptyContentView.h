//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIImageView;

@interface MMFinderLiveKTVEmptyContentView
{
    CDUnknownBlockType _clickActionBlock;
    MMUILabel *_titleLabel;
    UIImageView *_iconView;
    MMUIButton *_actionButton;
    NSString *_ktvThemeResourceFetchSessionToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ktvThemeResourceFetchSessionToken; // @synthesize ktvThemeResourceFetchSessionToken=_ktvThemeResourceFetchSessionToken;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (void)onActionButtonClicked;
- (id)liveTask;
- (void)onLiveKTVModeChanged:(_Bool)arg1 taskId:(id)arg2;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(_Bool)arg2;
- (void)updateActionButtonText:(_Bool)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

