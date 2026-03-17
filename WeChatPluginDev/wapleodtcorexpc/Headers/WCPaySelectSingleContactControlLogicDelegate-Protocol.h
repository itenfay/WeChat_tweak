//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, WCPaySelectSingleContactControlLogic;

@protocol WCPaySelectSingleContactControlLogicDelegate <NSObject>
- (void)selectSingleContactLogic:(WCPaySelectSingleContactControlLogic *)arg1 didSelectContact:(CContact *)arg2;

@optional
- (_Bool)filter:(WCPaySelectSingleContactControlLogic *)arg1 contact:(CContact *)arg2;
- (void)onCancel:(WCPaySelectSingleContactControlLogic *)arg1;
@end

