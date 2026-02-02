//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, WCPayCountryCodeAndPhoneNumberItem;

@protocol WCPayCountryCodeAndPhoneNumberItemDelegate <WCBaseInfoItemDelegate>
- (NSString *)getCountryCodeAndPhoneNumberItemInitCountryCode:(WCPayCountryCodeAndPhoneNumberItem *)arg1;
- (void)countryCodeAndPhoneNumberItem:(WCPayCountryCodeAndPhoneNumberItem *)arg1 countryCodeDidChange:(NSString *)arg2;
@end

