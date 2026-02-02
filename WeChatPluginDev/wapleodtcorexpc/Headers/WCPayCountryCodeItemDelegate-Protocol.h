//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCBaseInfoItemDelegate-Protocol.h"

@class CountryCodeWrap, WCPayCountryCodeItem;

@protocol WCPayCountryCodeItemDelegate <WCBaseInfoItemDelegate>
- (void)countryCodeItem:(WCPayCountryCodeItem *)arg1 isCountryCodeValid:(_Bool)arg2;
- (void)countryCodeItem:(WCPayCountryCodeItem *)arg1 didSelectCountryCode:(CountryCodeWrap *)arg2;
@end

