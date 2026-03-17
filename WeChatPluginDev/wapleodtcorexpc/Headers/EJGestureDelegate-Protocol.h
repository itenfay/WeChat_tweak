//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAEJTouchData;

@protocol EJGestureDelegate <NSObject>
- (void)onTouchMoved:(WAEJTouchData *)arg1;
- (void)onTouchCancel:(WAEJTouchData *)arg1;
- (void)onTouchEnd:(WAEJTouchData *)arg1;
- (void)onTouchBegin:(WAEJTouchData *)arg1;
@end

