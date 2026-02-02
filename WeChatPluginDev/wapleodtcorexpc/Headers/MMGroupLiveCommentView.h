//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderAnimationLoadingView;

@interface MMGroupLiveCommentView
{
    WCFinderAnimationLoadingView *_forbiddCommentLoadingView;
}

+ (double)commentTableWidthForLandscape;
+ (double)commentTableWidthForPortrait;
+ (double)commentTableWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *forbiddCommentLoadingView; // @synthesize forbiddCommentLoadingView=_forbiddCommentLoadingView;
- (void)updateInputViewAccessibility:(_Bool)arg1;
- (double)commentTableHeight;
- (double)commentTableWidth;
- (id)createUnReadCountLabel;
- (void)updateComponentHiddenForCommentEnableChanged;
- (void)handleBanOrOpenCommentFailed:(_Bool)arg1;
- (void)onPostFailError:(id)arg1 localSeq:(double)arg2 taskId:(id)arg3 extraInfo:(id)arg4 clientMsgId:(id)arg5;
- (void)reportForCommentStateUpdated;
- (void)updateCommentStateForAudienceWithNotifyCommentItem:(id)arg1;
- (void)updateCommentStateForAnchorWithNotifyCommentItem:(id)arg1;
- (void)updateCommentState:(unsigned long long)arg1 banOrAllowCommentNotify:(id)arg2;
- (void)handleLiveIsEnableCommentForAudience:(_Bool)arg1;
- (void)handleLiveIsEnableCommentForAnchor:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCancelEditTouched:(id)arg1;
- (void)banOrOpenComment;
- (void)showBanCommentActionSheet;
- (_Bool)checkCommentAbilityForAudience;
- (void)onCommentButtonClick;
- (void)onLiveIsEnableComment:(_Bool)arg1 notifyContent:(id)arg2 liveId:(unsigned long long)arg3;
- (void)onBanLiveCommentResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 enableComment:(_Bool)arg4;
- (id)createCommentPostEngine;
- (void)showToastForBanOrAllowComment:(_Bool)arg1 success:(_Bool)arg2;
- (id)registerCellClasses;
- (Class)commentTableCellClass;
- (id)commentFetchEngine;
- (_Bool)applyUpdateLiveCommentEnabled:(_Bool)arg1 taskId:(id)arg2;
- (id)createCommentTableViewModel;
- (double)commentTableHeightForInputShow:(_Bool)arg1;
- (double)commentTableBackViewBottom;
- (void)showContent;
- (void)hideContent;
- (void)createCommentButton;
- (double)commentButtonLeft;
- (void)layoutCommentButton;
- (void)layoutCommentTableTapView;
- (void)layoutContentBackView;
- (void)layoutInputView;
- (void)layoutUI;
- (void)unRegisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

