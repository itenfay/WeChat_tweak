//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol POITapGestureRecognizerDelegate <NSObject>
- (void)didTouchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)didTouchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)didTouchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)didTouchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

