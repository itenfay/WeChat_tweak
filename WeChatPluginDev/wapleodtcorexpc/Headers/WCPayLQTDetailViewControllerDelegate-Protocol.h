//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PopUpsItem;
@protocol MMUIViewControllerDelegate;

@protocol WCPayLQTDetailViewControllerDelegate <NSObject>
- (void)BalanceDetailJumpToLQTSave:(NSString *)arg1 showKeyboard:(_Bool)arg2 entranceType:(int)arg3 bindSerial:(NSString *)arg4 amount:(NSString *)arg5 vcDelegate:(id <MMUIViewControllerDelegate>)arg6;
- (void)onDetailViewContollerClickRedDot:(NSString *)arg1;
- (void)onDetailViewControllerClickAutoChargeSetting;
- (void)onDetailViewControllerShouldPopItem:(PopUpsItem *)arg1 fromTransferIn:(_Bool)arg2;
- (void)onDetailViewControllerClickDeposit;
- (void)onDetailViewControllerNeedUpdateDataFromSvrWithLoading;
- (void)onDetailViewControllerNeedUpdateDataFromSvr;
- (void)onDetailViewControllerUnBindBtnClick;
- (void)onDetailViewControllerSaveBtnClick;
- (void)onDetailViewControllerFetchBtnClick;
- (void)onDetailViewControllerBack;
@end

