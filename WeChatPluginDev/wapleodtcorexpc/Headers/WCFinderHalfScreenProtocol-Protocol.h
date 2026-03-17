//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, UIPercentDrivenInteractiveTransition, UIView;

@protocol WCFinderHalfScreenProtocol <NSObject>
- (UIView *)getHalfContainerView;

@optional
- (void)listenHalfScreenIsShow:(_Bool)arg1 eventType:(unsigned long long)arg2;
- (NSNumber *)getCurTargetRatioValue;
- (NSString *)getRegisterKey;
- (NSNumber *)getCurMediaWidHeightRatioValue;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (void)listenHalfScreenFrameChanged:(struct CGRect)arg1;
- (UIView *)getListenHalfFrameCell;
- (UIView *)getListenHalfAnimView;
- (unsigned long long)listenHalfScreenOption;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (UIPercentDrivenInteractiveTransition *)getHalfDismissTransition;
- (UIView *)getHalfTransformView;
@end

