//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPPlayerEventInfo;

@protocol ITPPlayerEventReceiver <NSObject>
- (void)onEvent:(TPPlayerEventInfo *)arg1;
@end

