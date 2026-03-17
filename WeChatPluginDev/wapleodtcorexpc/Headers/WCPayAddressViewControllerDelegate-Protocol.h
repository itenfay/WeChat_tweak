//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol WCPayAddressViewControllerDelegate <NSObject>
- (NSMutableArray *)onWCPayAddressViewControllerBannedCountryCodes;
- (NSString *)onWCPayAddressViewControllerPresetAddress;
- (NSString *)onWCPayAddressViewControllerPresetCity;
- (NSString *)onWCPayAddressViewControllerPresetProvince;
- (NSString *)onWCPayAddressViewControllerPresetCountry;
- (_Bool)onWCPayAddressViewControllerOpenSearch;
- (_Bool)onWCPayAddressViewControllerChinaFirst;
- (_Bool)onWCPayAddressViewControllerDisableLocation;
- (void)onWCPayAddressViewControllerDoneWithCountry:(NSString *)arg1 province:(NSString *)arg2 city:(NSString *)arg3 address:(NSString *)arg4;
- (void)onWCPayAddressViewControllerBack;
@end

