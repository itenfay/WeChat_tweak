//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveOrdinaryReplayOperationView, NSDictionary, NSString;

@protocol MMFinderLiveOrdinaryReplayOperationViewDelegate <NSObject>

@optional
- (void)mmliveOrdinaryReplayOperationView:(MMFinderLiveOrdinaryReplayOperationView *)arg1 complainMsg:(unsigned long long)arg2 frameId:(NSString *)arg3;
- (void)onSliderSeekToTime:(double)arg1 isAtGreateTime:(_Bool)arg2;
- (void)onSliderSeekBegin;
- (void)onReplayInvalidated;
- (void)updateOrientationButton;
- (struct CGRect)currentMainVideoFrame;
- (void)onMMLiveOperationChangeAppSceneButtonClicked;
- (void)onMMLiveOrientationButtonClicked;
- (void)onMMLiveOperationPayButtonClicked;
- (void)onMMLivePaymentTrialCountDown:(unsigned int)arg1;
- (void)onMMLiveOperationUserHeadImageClicked:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)onMMLiveOperationMinimize;
- (void)onMMLiveOperationClose;
- (void)onMMLiveActionButtonClicked;
@end

