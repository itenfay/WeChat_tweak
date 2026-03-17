//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveCommentView, NSArray, UIColor, UIView, WCLiveBottomTextButton;

@protocol MMLiveCommentViewDelegate <NSObject>

@optional
- (_Bool)useComposedMicModeChangeMsg;
- (_Bool)getFinderLiveCarouselCanShow;
- (_Bool)getFinderLiveLogoWatermarkCanShow;
- (void)onLandscapeBarrageSettingButtonDisplayChanged:(_Bool)arg1;
- (void)onLandscapeBarrageSettingPanelDisplayChanged:(_Bool)arg1;
- (UIColor *)getBottomButtonsBGColor;
- (double)getTopCommentOriginYForCommentView:(MMLiveCommentView *)arg1;
- (void)onBarrageInputModeChanged:(_Bool)arg1;
- (void)onLandscapeBarrageDisplayChanged:(_Bool)arg1;
- (void)onEnablePrivateCommentChanged:(_Bool)arg1;
- (_Bool)isDisplayOperationWidgetsForAudience;
- (void)onVerifyRealNameForComment;
- (NSArray *)getLiveCommentViewCustomHitViews;
- (_Bool)getIsShoppingAvailable;
- (double)getCommentButtonLeft;
- (double)getCommentTableTop;
- (double)getCommentTableLandscapeBottom;
- (double)getCommentTableBottom;
- (double)getBottomWidgetsBottom;
- (void)insertBarrageContentViewToOperationViewHierarchy:(UIView *)arg1;
- (void)insertTopCommentContentViewToOperationViewHierarchy:(UIView *)arg1;
- (void)layoutBarrageSettingButtonInOperationView:(WCLiveBottomTextButton *)arg1;
- (void)layoutCommentButtonInOperationView:(WCLiveBottomTextButton *)arg1 commentButtonMaxWidth:(double)arg2 commentButtonLeft:(double)arg3 realCanShowTalkButton:(_Bool)arg4;
- (void)updateCommentButtonTopPosition:(WCLiveBottomTextButton *)arg1;
- (double)getRightWidgetsLeft;
- (double)getTopWidgetsBottom;
- (double)getStaticTopWidgetsBottom;
- (void)onCommentViewDidTaped:(struct CGPoint)arg1;
- (void)updateButtonHiddenForInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
@end

