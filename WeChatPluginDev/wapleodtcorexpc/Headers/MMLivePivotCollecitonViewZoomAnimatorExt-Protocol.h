//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveSdkInfo, NSString;

@protocol MMLivePivotCollecitonViewZoomAnimatorExt

@optional
- (void)onLivePivotForbidScrollPanGestureEnd;
- (void)updateLiveSdkInfo:(LiveSdkInfo *)arg1 finderUserName:(NSString *)arg2;
- (void)resetZoomAnimatorStatus;
- (void)updateAfterZoomOut;
- (void)updateBeforeZoomOut;
- (void)doZoomOutAnimator;
- (void)updateAfterZoomIn;
- (void)updateBeforeZoomIn;
- (void)doZoomInAnimator;
@end

