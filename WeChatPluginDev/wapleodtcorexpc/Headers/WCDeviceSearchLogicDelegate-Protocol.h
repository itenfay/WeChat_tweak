//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCSearchedDevice;

@protocol WCDeviceSearchLogicDelegate <NSObject>
- (void)onDeviceFound:(WCSearchedDevice *)arg1;
@end

