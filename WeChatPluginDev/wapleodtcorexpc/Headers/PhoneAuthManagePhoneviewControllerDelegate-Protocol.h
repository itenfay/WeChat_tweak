//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo, PhoneAuthGetPhoneNumberLogicPhoneInfo;

@protocol PhoneAuthManagePhoneviewControllerDelegate <NSObject>

@optional
- (void)didAddNewPhoneInfo:(PhoneAuthGetPhoneNumberLogicPhoneInfo *)arg1;
- (void)didDeletePhoneInfo:(PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo *)arg1;
@end

