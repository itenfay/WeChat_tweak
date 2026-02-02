//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PopUpsItem, QryUsrFundDetailRes;

@protocol WCPayLQTQryUserFundDetailCgiDelegate <NSObject>
- (void)onGetLQTQryUserFundDetailRealnameGuideInfo:(NSString *)arg1;
- (void)onGetLQTQryUserFundDetailPopItems:(PopUpsItem *)arg1;
- (void)onGetLQTQryUserFundDetailResp:(QryUsrFundDetailRes *)arg1;
@end

