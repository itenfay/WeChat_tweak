//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMContentScrollView, UIGestureRecognizer;

@protocol MMContentScrollViewDelegate <NSObject>
- (_Bool)contentScrollView:(MMContentScrollView *)arg1 shouldIgnoreDoubleTapWithGestureRecoginzer:(UIGestureRecognizer *)arg2;
- (void)contentScrollViewDidDoubleTap:(MMContentScrollView *)arg1;
- (void)contentScrollViewDidSingleTap:(MMContentScrollView *)arg1;
@end

