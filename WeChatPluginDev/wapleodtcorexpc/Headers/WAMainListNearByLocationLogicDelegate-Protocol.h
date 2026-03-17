//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLLocation;

@protocol WAMainListNearByLocationLogicDelegate <NSObject>
- (void)onGetLocationFailedWithReason:(unsigned int)arg1;
- (void)onGetLocationSuccess:(CLLocation *)arg1;
@end

