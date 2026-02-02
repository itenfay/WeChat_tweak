//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol BlueProfileDelegate <NSObject>
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
@end

