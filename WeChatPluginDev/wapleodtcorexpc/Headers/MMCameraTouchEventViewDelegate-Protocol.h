//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCameraTouchEventView, NSSet, UIEvent;

@protocol MMCameraTouchEventViewDelegate <NSObject>

@optional
- (void)MMCameraTouchEventView:(MMCameraTouchEventView *)arg1 didReceiveTouchEventWithState:(unsigned long long)arg2 touches:(NSSet *)arg3 event:(UIEvent *)arg4;
@end

