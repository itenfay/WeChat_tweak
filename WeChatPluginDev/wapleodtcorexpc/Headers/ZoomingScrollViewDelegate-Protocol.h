//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ZoomingScrollViewDelegate <NSObject>

@optional
- (void)onZoomingScrollViewZoomChanged;
- (void)onZoomingScrollViewDoubleTap;
- (void)onZoomingScrollViewSingleTap;
@end

