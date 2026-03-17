//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSString, WCCardAcceptCardInfo, WCShareCardData;

@protocol IWCShareCardPkgExt <NSObject>

@optional
- (void)onDeleteCardResponse:(NSString *)arg1 retCode:(int)arg2;
- (void)onMarkedResponseError;
- (void)onMarkedResponse:(_Bool)arg1 success:(_Bool)arg2 andMarkUser:(NSString *)arg3 markCardId:(NSString *)arg4 expiredTime:(float)arg5 payQRCodeWording:(NSString *)arg6;
- (void)onSearchShareCard:(NSString *)arg1 Result:(NSMutableArray *)arg2 Hasmore:(_Bool)arg3;
- (void)onGetComment:(NSString *)arg1 CommentList:(NSArray *)arg2;
- (void)onGetShareCardsLayoutError;
- (void)onGetShareCardsHomePageLayout:(NSArray *)arg1 andOtherCityList:(NSArray *)arg2 withCityName:(NSString *)arg3 isLocalCityEnd:(_Bool)arg4 isOtherCityEnd:(_Bool)arg5 isFirstPageData:(_Bool)arg6 entryTip:(NSString *)arg7 entryIcons:(NSArray *)arg8;
- (void)onGetShareCardsLayout:(NSArray *)arg1 andLocalCityList:(NSArray *)arg2 withCityName:(NSString *)arg3 isEnd:(_Bool)arg4;
- (void)onGetNextPageShareCardList:(NSMutableArray *)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3;
- (void)onGetFirstPageShareCardList:(NSMutableArray *)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3;
- (void)onUpdateShareCard:(WCShareCardData *)arg1 Error:(int)arg2;
- (void)onUpdateShareCardList:(NSArray *)arg1;
- (void)onGetNextPageShareCardListByShareUser:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(_Bool)arg4;
- (void)onGetFirstPageShareCardListByShareUser:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(_Bool)arg4;
- (void)onGetNextPageShareCardListByAppID:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(_Bool)arg4;
- (void)onGetFirstPageShareCardListByAppID:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(_Bool)arg4;
- (void)onMsgNotifyShareCardConsumed:(NSArray *)arg1 sharedCardId:(NSString *)arg2 consumedBoxId:(NSString *)arg3 subscribeAppUserName:(NSString *)arg4 subscribeWording:(NSString *)arg5 retMsg:(NSString *)arg6;
- (void)onShareCard:(NSString *)arg1 TpID:(NSString *)arg2 successShareCardList:(NSArray *)arg3 andCardInfo:(WCCardAcceptCardInfo *)arg4;
- (void)onShareCard:(NSString *)arg1 TpID:(NSString *)arg2 andCardInfo:(WCCardAcceptCardInfo *)arg3;
@end

