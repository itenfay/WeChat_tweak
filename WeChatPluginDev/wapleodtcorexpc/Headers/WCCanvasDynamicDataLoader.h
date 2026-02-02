//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCCanvasDynamicDataLoaderDelegate;

@interface WCCanvasDynamicDataLoader
{
    id <WCCanvasDynamicDataLoaderDelegate> _delegate;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (_Bool)cacheCanvasServerData:(id)arg1 forLoadParams:(id)arg2;
+ (_Bool)cacheUxDynamicXML:(id)arg1 forCanvasId:(id)arg2 canvasExt:(id)arg3;
+ (void)cleanCanvasServerDataCacheWithLoadParams:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCanvasDynamicDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleGetRedPacketCoverUrlResponse:(id)arg1;
- (void)getWeWorkContactWithJumpParams:(id)arg1 searchScene:(unsigned long long)arg2 subScene:(int)arg3;
- (void)handleUpdateCanvasStateResponse:(id)arg1;
- (void)updateCanvasStateWithCanvasId:(id)arg1 uxinfo:(id)arg2 enterScene:(int)arg3 adExtInfo:(id)arg4 pageId:(id)arg5 canvasDynamicInfo:(id)arg6 localCacheTime:(unsigned long long)arg7;
- (void)handleGetCouponResponse:(id)arg1;
- (void)getCouponWithAppId:(id)arg1 stockId:(id)arg2 uxInfo:(id)arg3 componentId:(id)arg4;
- (void)handleSearchContactResponse:(id)arg1;
- (void)handleFetchTwistCardStatusResponse:(id)arg1;
- (void)fetchTwistCardStatusWithUxInfo:(id)arg1 canvasScene:(int)arg2 opType:(unsigned int)arg3 cardId:(id)arg4 cardType:(unsigned int)arg5 giveCardId:(id)arg6 canvasId:(id)arg7 pageId:(id)arg8;
- (void)handleFetchTwistCardIdResponse:(id)arg1;
- (void)fetchTwistCardIdWithSnsId:(id)arg1 uxInfo:(id)arg2 extInfo:(id)arg3 canvasId:(id)arg4 pageId:(id)arg5 canvasScene:(int)arg6;
- (void)doSearchContactWithAliasname:(id)arg1;
- (void)handleupdateProfileUsernameResponse:(id)arg1;
- (void)updateProfileUsernameWithGroupInfo:(id)arg1 andUxinfo:(id)arg2;
- (void)handleUpdateQrCodeResponse:(id)arg1;
- (void)requestRedPacketCoverUrl:(id)arg1 uxinfo:(id)arg2 pageId:(id)arg3 canvasId:(id)arg4 twistId:(id)arg5 autoJump:(_Bool)arg6;
- (void)updateQrCodeWithPoi:(id)arg1 qrExtInfo:(id)arg2 uxInfo:(id)arg3 componentId:(id)arg4 snsId:(id)arg5;
- (void)updateSharedUxinfoResponse:(id)arg1;
- (void)updateSharedUxinfo:(id)arg1 enterScene:(unsigned int)arg2;
- (void)handleGetSmartPhoneResponse:(id)arg1;
- (void)loadSmartPhoneWithSid:(unsigned int)arg1 compId:(unsigned int)arg2 aid:(unsigned long long)arg3 traceId:(id)arg4 uxinfo:(id)arg5 pageId:(id)arg6;
- (void)handleOfficialSyncResponse:(id)arg1;
- (void)handleFavOfficialItemResponse:(id)arg1;
- (void)handleAdCanvasInfoResponse:(id)arg1;
- (void)handleGameCanvasInfoResponse:(id)arg1;
- (void)handleUxCanvasInfoResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)loadUxCanvasDynamicDataForSyncBuffer:(id)arg1;
- (void)favProduct:(id)arg1;
- (id)getCachedUxXMLForCanvasId:(id)arg1 canvasExt:(id)arg2;
- (void)loadUxDynamicXMLForCanvasId:(id)arg1 canvasExt:(id)arg2 shouldCache:(_Bool)arg3;
- (void)loadCanvasServerDataForLoadParams:(id)arg1;
- (id)getCachedCanvasServerDataForLoadParams:(id)arg1;
- (void)loadGameCanvasDynamicDataForApp:(id)arg1 shareType:(id)arg2 userInfo:(id)arg3;
- (void)dealloc;
- (id)init;

@end

