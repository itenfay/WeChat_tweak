//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, UIView, WCFinderJumpInfo;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderJumpInfoViewProtocol <NSObject>
- (int)showPosition;
- (WCFinderJumpInfo *)jumpInfo;
- (void)updateWithJumpInfo:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
- (void)updateWithJumpInfo:(WCFinderJumpInfo *)arg1 showPosition:(int)arg2;

@optional
- (void)endExposeAction;
- (void)startExposeAction;
- (void)expandJumpInfoViewForCompletePlayIfNeeded;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)completionForAppearAnimation;
- (void)changeToAppear:(_Bool)arg1 duration:(double)arg2;
- (void)prepareForAppearAnimationFromView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (void)animationFinishToStyleWithIndex:(unsigned long long)arg1;
- (void)prepareForAnimationToStyleWithIndex:(unsigned long long)arg1;
- (void)jumpInfoActionAfterAnimationToPhase:(unsigned long long)arg1;
- (void)jumpInfoAnimatedActionBeforeAnimation:(void (^)(void))arg1;
- (void)jumpInfoActionBeforeAnimationToPhase:(unsigned long long)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayStateChanged:(_Bool)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)changeToJumpInfoWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)changeToPhase:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)changeToShow:(_Bool)arg1;
@end

