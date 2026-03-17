//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MotionDetectorDelegate <NSObject>

@optional
- (void)feedbackCameraFocused;
- (void)feedbackMotionStateChanged:(int)arg1;
@end

