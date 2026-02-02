//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIHookView, UIWindow;

@protocol MMUIHookViewDelegate <NSObject>

@optional
- (void)OnMMUIHookViewDidMoveToWindow:(UIWindow *)arg1;
- (void)OnMMUIHookViewFrameChanged:(MMUIHookView *)arg1;
@end

