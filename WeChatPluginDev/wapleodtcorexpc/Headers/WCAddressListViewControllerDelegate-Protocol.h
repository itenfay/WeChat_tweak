//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAddressBaseAddress;

@protocol WCAddressListViewControllerDelegate <NSObject>
- (NSString *)getListHeaderTitle;
- (void)AddressImport;
- (void)AddressListDelete:(WCAddressBaseAddress *)arg1;
- (void)AddressListEdit:(WCAddressBaseAddress *)arg1;
- (void)AddressListAdd;
- (void)AddressListComplete:(WCAddressBaseAddress *)arg1;
- (void)AddressListBack;

@optional
- (void)AddressFilledByFriend;
@end

