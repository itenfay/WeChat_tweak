//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIDevice.h>

@class NSString;

@interface UIDevice (QMap_Base)
- (id)vendorDeviceId;
- (id)UUID;
@property(retain, nonatomic) NSString *userID; // @dynamic userID;
- (id)qmapVendorId;
- (void)setQmapVendorId:(id)arg1;
@end

