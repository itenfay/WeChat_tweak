//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCAccountLogoutLogicDelegate <NSObject>

@optional
- (void)onAccountLogoutLogicDidQuit;
- (void)onAccountLogoutLogicCheckOK;
- (void)onAccountLogoutLogicCancel;
@end

