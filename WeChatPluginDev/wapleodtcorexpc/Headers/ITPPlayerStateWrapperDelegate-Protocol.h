//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPPlayerStateWrapper;

@protocol ITPPlayerStateWrapperDelegate <NSObject>
- (void)onStateChange:(TPPlayerStateWrapper *)arg1 preState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
@end

