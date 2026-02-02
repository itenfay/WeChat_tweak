//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveRewardQuotaSheetView, NSString;

@protocol MMFinderLiveRewardSendingLogicForOperationDelegate <NSObject>
- (void)onBeginRewardQuotaExceededFlowSignVerifyFromRewardQuotaPolicySheet:(NSString *)arg1 flowSignVerifyCompleteBlock:(void (^)(void))arg2;
- (void)onBeginRewardQuotaExceededFaceVerifyFromRewardQuotaAlert:(MMLiveRewardQuotaSheetView *)arg1 faceVerifyCompleteBlock:(void (^)(void))arg2;
- (void)onBeginRewardQuotaSettingFromRewardQuotaAlert:(MMLiveRewardQuotaSheetView *)arg1;
@end

