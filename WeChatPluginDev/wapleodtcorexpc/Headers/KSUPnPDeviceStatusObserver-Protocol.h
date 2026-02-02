//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSUPnPDevice;

@protocol KSUPnPDeviceStatusObserver <NSObject>
- (void)deviceStatusDidChange:(KSUPnPDevice *)arg1;
@end

