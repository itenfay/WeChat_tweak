//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCMomentsPlayerViewContainer;

@protocol WCMomentsPlayerViewContainerDelegate <NSObject>
- (void)playerViewContainerDidZoom:(WCMomentsPlayerViewContainer *)arg1;

@optional
- (void)playerViewContainerDidEndZooming:(WCMomentsPlayerViewContainer *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)playerViewContainerWillBeginZooming:(WCMomentsPlayerViewContainer *)arg1 withView:(UIView *)arg2;
@end

