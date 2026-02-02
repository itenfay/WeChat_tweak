//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCState, WCTransition;

@protocol WCStateMachineDelegate <NSObject>

@optional
- (void)onStateMachineDidExitState:(WCState *)arg1 withTransition:(WCTransition *)arg2;
- (void)onStateMachineDidEnterState:(WCState *)arg1 withTransition:(WCTransition *)arg2;
@end

