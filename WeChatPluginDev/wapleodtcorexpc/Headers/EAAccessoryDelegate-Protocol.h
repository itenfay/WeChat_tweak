//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EAAccessory;

@protocol EAAccessoryDelegate <NSObject>

@optional
- (void)accessoryDidDisconnect:(EAAccessory *)arg1;
@end

