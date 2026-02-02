//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLiveRewardQuotaPolicySheetViewDelegate <NSObject>

@optional
- (void)onMMLiveRewardQuotaPolicySheetViewProtocolCheckBoxClicked;
- (void)onMMLiveRewardQuotaPolicySheetViewCancelButtonClicked;
- (void)onMMLiveRewardQuotaPolicySheetViewActionButtonClicked:(unsigned long long)arg1 verifyUrl:(NSString *)arg2 secverifyId:(NSString *)arg3 userInfo:(id)arg4;
@end

