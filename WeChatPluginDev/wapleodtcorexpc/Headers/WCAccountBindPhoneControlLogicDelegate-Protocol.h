//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "VerifyPhoneDelegate-Protocol.h"

@class WCAccountBindPhoneControlLogic;

@protocol WCAccountBindPhoneControlLogicDelegate <NSObject, VerifyPhoneDelegate>

@optional
- (void)onWCAccountBindPhoneControlLogicCheckOK:(WCAccountBindPhoneControlLogic *)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(WCAccountBindPhoneControlLogic *)arg1;
@end

