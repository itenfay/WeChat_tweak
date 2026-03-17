//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVVideoDevice;

@protocol AVVideoDeviceFrameDelegate <NSObject>
- (void)videoDeviceDidToggleCamera:(AVVideoDevice *)arg1;
- (void)videoDeviceDidStartSession:(AVVideoDevice *)arg1;
- (void)videoDeviceWillStartSession:(AVVideoDevice *)arg1;
@end

