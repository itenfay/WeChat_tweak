//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAddressHeadViewDelegate <NSObject>
- (void)layoutSubviewsWhenHeaderChange:(double)arg1;
- (void)setAddressWithProvince:(NSString *)arg1 andCity:(NSString *)arg2 andDistrict:(NSString *)arg3 andStreet:(NSString *)arg4 andDetail:(NSString *)arg5;
@end

