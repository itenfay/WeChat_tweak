//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CountryCodeWrap;

@protocol CountryCodePickerDelegate <NSObject>
- (void)CountryCodePickerDidPickCountryCode:(CountryCodeWrap *)arg1;

@optional
- (void)CountryCodePickerQuitWithoutPick;
@end

