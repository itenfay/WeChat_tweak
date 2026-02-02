//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAddressBaseAddress;

@protocol WCAddressEntranceControlLogicDelegate <NSObject>

@optional
- (void)addressLogicDidStop;
- (void)didSelectAddress:(WCAddressBaseAddress *)arg1;
- (NSString *)getAddressListHeaderTitle;
@end

