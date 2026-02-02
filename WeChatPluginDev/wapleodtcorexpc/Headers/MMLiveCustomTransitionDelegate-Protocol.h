//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage, UIView;

@protocol MMLiveCustomTransitionDelegate <NSObject>
- (UIView *)getExtendTransitionContainerBackView;
- (struct CGRect)requestMaximizeToRect;
- (struct CGRect)requestMinimizeFromRect;
- (UIImage *)requestSnapshotImage;
- (long long)requestPreviousOrientation;
- (struct CGRect)requestMinimizeLiveFrameInScreen;
- (struct CGRect)requestMinimizeFrame;
- (long long)requestCurrentTransitionState;
@end

