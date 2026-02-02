//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIColor;

@protocol WCAdvertiseSphereViewDelegate <NSObject>

@optional
- (void)onPanGestureEnd;
- (void)idleStateDidChenged:(_Bool)arg1;
- (void)onFullCoverButtonClicked;
- (UIColor *)getBackGroundColorWhenLoading;
- (void)resourceLoadingWithProgress:(double)arg1;
- (void)resourceDidFailed;
- (void)resourceDidLoad;
- (void)resourceLoading;
@end

