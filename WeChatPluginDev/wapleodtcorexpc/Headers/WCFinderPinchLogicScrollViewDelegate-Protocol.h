//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCFinderPinchLogicScrollView;

@protocol WCFinderPinchLogicScrollViewDelegate <NSObject>

@optional
- (void)pinchScrollViewDidZoom:(WCFinderPinchLogicScrollView *)arg1;
- (UIView *)finderPinchScrollViewGetContentView;
@end

