//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAddressControlData;

@protocol WCAddressInfoViewControllerDelegate <NSObject>
- (void)AddressInfoAnalysic:(NSString *)arg1;
- (void)AddressInfoNext:(WCAddressControlData *)arg1;
- (void)AddressInfoCancel;
@end

