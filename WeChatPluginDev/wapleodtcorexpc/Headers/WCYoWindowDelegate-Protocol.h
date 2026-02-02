//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIWindow, UIEvent, UIView;

@protocol WCYoWindowDelegate <NSObject>
- (UIView *)window:(MMUIWindow *)arg1 hitTest:(struct CGPoint)arg2 withEvent:(UIEvent *)arg3;
@end

