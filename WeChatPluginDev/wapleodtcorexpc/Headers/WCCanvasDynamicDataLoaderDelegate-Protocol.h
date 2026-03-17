//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSDictionary, NSString, WCAdCanvasLoadParams, WCAdConventionalJumpParams, WCAdDynamicCanvasServerData, WCAdRandomPickCardExtInfo, WCAdRandomPickComponentExtInfo;

@protocol WCCanvasDynamicDataLoaderDelegate <NSObject>

@optional
- (void)onGetRedPacketCoverUrlResult:(NSString *)arg1 autoJump:(_Bool)arg2;
- (void)onUpdateCanvasStateResult:(_Bool)arg1 cleanLocalCache:(unsigned int)arg2;
- (void)onGetCouponWithResult:(long long)arg1 errMsg:(NSString *)arg2;
- (void)onFetchTwistCardStatusWithResult:(_Bool)arg1 opType:(unsigned int)arg2 cardId:(NSString *)arg3 status:(unsigned int)arg4 giveCardId:(NSString *)arg5 receiveUrl:(NSString *)arg6;
- (void)onFetchTwistCardId:(NSString *)arg1 cardExtInfo:(WCAdRandomPickCardExtInfo *)arg2 componentExtInfo:(WCAdRandomPickComponentExtInfo *)arg3;
- (void)onUpdateProfileUsername:(CContact *)arg1;
- (void)onGetWeWorkContactDoneWithContact:(CContact *)arg1 jumpParams:(WCAdConventionalJumpParams *)arg2;
- (void)onUpdateQrCode:(NSString *)arg1 componentId:(NSString *)arg2 snsId:(NSString *)arg3;
- (void)onUpdateRedEnvelopesSkinState:(unsigned int)arg1;
- (void)onUpdateSharedUxinfo:(NSString *)arg1;
- (void)onGetSmartPhoneNumber:(NSString *)arg1;
- (void)onFavProductReturn:(unsigned int)arg1 errMsg:(NSString *)arg2;
- (void)onCanvasServerDataReturn:(WCAdDynamicCanvasServerData *)arg1 errorCode:(int)arg2 forLoadParams:(WCAdCanvasLoadParams *)arg3;
- (void)onUxCanvasDynamicXMLReturn:(NSString *)arg1 error:(int)arg2 forCanvasId:(NSString *)arg3;
- (void)onCanvasDynamicDataReturn:(NSDictionary *)arg1;
@end

