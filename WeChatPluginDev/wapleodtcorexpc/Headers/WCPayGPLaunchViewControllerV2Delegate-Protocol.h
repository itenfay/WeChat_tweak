//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, UIImage;

@protocol WCPayGPLaunchViewControllerV2Delegate <NSObject>
- (NSDictionary *)getGroupPayReportData:(unsigned long long)arg1 launchTheme:(NSString *)arg2;
- (void)onWCPayGPLaunchVCClickImportFromSolitaire;
- (_Bool)showImportFromSolitaireEntry;
- (void)launchCustomizeAARequestWithActivityTheme:(NSString *)arg1;
- (void)launchActivityAARequestWithActivityTheme:(NSString *)arg1 totalAmount:(unsigned long long)arg2 payerItems:(NSArray *)arg3;
- (void)launchCommonAARequestWithMemberCount:(unsigned int)arg1 perMemberAmount:(unsigned long long)arg2 activityTheme:(NSString *)arg3 payerUsernameArray:(NSArray *)arg4;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyVCWithSelectedContact:(NSArray *)arg1 withUserPayAmountDict:(NSDictionary *)arg2;
- (void)onWCPayGPLaunchVCClickSelectMemberBtn:(NSArray *)arg1 withIgnoreContact:(NSArray *)arg2 withSelectMemberSource:(unsigned long long)arg3;
- (void)onWCPayGPLaunchVCNeedUploadImage:(UIImage *)arg1;
- (void)onWCPayGPLaunchViewControllerCancel;
@end

