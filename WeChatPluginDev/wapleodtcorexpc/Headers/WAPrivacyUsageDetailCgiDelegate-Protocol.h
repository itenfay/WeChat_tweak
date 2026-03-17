//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WAPrivacyUsageDetailCgi, WCBaseNetworkingError;

@protocol WAPrivacyUsageDetailCgiDelegate <NSObject>
- (void)getPrivacyUsageDetailCgi:(WAPrivacyUsageDetailCgi *)arg1 didFailWithError:(WCBaseNetworkingError *)arg2;
- (void)getPrivacyUsageDetailCgi:(WAPrivacyUsageDetailCgi *)arg1 didGetUsageDetailRecordList:(NSArray *)arg2 hasNoMore:(_Bool)arg3;
@end

