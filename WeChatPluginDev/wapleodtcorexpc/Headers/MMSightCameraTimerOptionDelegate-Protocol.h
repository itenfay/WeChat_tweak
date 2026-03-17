//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMSightCameraTimerOptionDelegate <NSObject>
- (void)onTimerCountDownCancelled;
- (void)onTimerCountDownToTimeSec:(long long)arg1;
- (void)onTimerChangedToType:(long long)arg1;
@end

