//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MonoServiceMsg;

@protocol MonoServiceMsgDelegate <NSObject>
- (_Bool)onMonoServiceMsgHoldWithMsg:(MonoServiceMsg *)arg1;
- (_Bool)onMonoServiceMsgCancelWithMsg:(MonoServiceMsg *)arg1;
- (_Bool)onMonoServiceMsgRejectWithMsg:(MonoServiceMsg *)arg1;
- (_Bool)onMonoServiceMsgHandleWithMsg:(MonoServiceMsg *)arg1;
- (void)onMonoServiceMsgStartWithMsg:(MonoServiceMsg *)arg1;
@end

