//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScreenEdgePanGestureRecognizer, UIScrollView;

@protocol WSInteractivePage <NSObject>

@optional
- (UIScrollView *)getMainPageScrollView;
- (UIScreenEdgePanGestureRecognizer *)getCusteomPopBackInteractivePopGesture;
@end

