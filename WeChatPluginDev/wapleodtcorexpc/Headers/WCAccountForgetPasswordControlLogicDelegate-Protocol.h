//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAccountForgetPasswordControlLogic;

@protocol WCAccountForgetPasswordControlLogicDelegate <NSObject>

@optional
- (void)onWCAccountForgetPasswordControlLogicStop:(WCAccountForgetPasswordControlLogic *)arg1;
- (void)onWCAccountForgetPasswordControlLogic:(WCAccountForgetPasswordControlLogic *)arg1 continueWithTicket:(NSString *)arg2 ticketType:(unsigned int)arg3 handled:(_Bool *)arg4;
@end

