//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol StoreEmotionGetDonorListCgiDelegate <NSObject>

@optional
- (void)onGetDonorsListFailedWithPid:(NSString *)arg1;
- (void)onGetDonorsListSuccessedWithPid:(NSString *)arg1 Donors:(NSArray *)arg2 DonorNum:(unsigned int)arg3 hasMore:(_Bool)arg4;
@end

