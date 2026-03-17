//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLLocation;

@protocol WALocationGetterDelegate <NSObject>

@optional
- (void)onGetLocationSuccess:(CLLocation *)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
@end

