//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCCardAcceptCardInfo, WCCardData, WCShareCardData;

@protocol WCNewCardDetailLogicDelegate <NSObject>
- (void)onGetOfflineCodeError;
- (void)onShareCardDelete:(_Bool)arg1 withShareCard:(WCShareCardData *)arg2;
- (void)onMarkShareCardWithRet:(_Bool)arg1 isMark:(_Bool)arg2 andMarkUsr:(NSString *)arg3 markCardId:(NSString *)arg4 expireTime:(float)arg5 qrCodeWording:(NSString *)arg6;
- (void)onMarkShareCardError;
- (void)onShareCardConsumedWithShareCardTpInfoList:(NSArray *)arg1 shareCardId:(NSString *)arg2 consumedBoxId:(NSString *)arg3 subscribeAppUserName:(NSString *)arg4 subscribeWording:(NSString *)arg5 retMsg:(NSString *)arg6;
- (void)onCurShareCardUpdate:(WCShareCardData *)arg1;
- (_Bool)shouldRefreshWithShareCard;
- (void)onShareCardReqRetSystemErr:(_Bool)arg1;
- (void)onShareCardReqRetWithCardInfo:(WCCardAcceptCardInfo *)arg1;
- (void)onShareCardSuccessWithCardData:(WCCardData *)arg1;
- (void)onCardHasBeenUsed:(WCCardData *)arg1;
- (void)onGiftCardRet:(int)arg1 cardData:(WCCardData *)arg2;
- (void)onAcceptCardRet:(_Bool)arg1 withLoadingStr:(NSString *)arg2 withAcceptInfoJsonStr:(NSString *)arg3 isShareCard:(_Bool)arg4;
- (void)onGetCardDataFromSvrErr:(int)arg1;
- (void)onViewControllerAllContentNeedReload;
- (void)onViewControllerNeedReload;
- (void)onShareCardDataNotPrepare;
@end

