//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCardPkgUtil : NSObject
{
}

+ (void)reportMktCardHistoryPageActionWithPageScene:(int)arg1 reportScene:(int)arg2 cardId:(id)arg3 cardIndex:(long long)arg4;
+ (void)reportMktCardSecondPageIntoDetailWithPageScene:(unsigned int)arg1 cardId:(id)arg2 cardIndex:(long long)arg3 mchIndex:(long long)arg4 fromScene:(long long)arg5;
+ (void)reportMktCardSecondPageClickWithPageScene:(unsigned int)arg1 clickScene:(unsigned int)arg2;
+ (void)reportMktIDKey:(unsigned int)arg1;
+ (void)reportMktCardInvalidTicketHomePageDataReportWithCardID:(id)arg1 cardIndex:(unsigned int)arg2 reportScene:(unsigned int)arg3;
+ (void)reportMktCardTicketHomePageDataReportWithCardType:(unsigned int)arg1 cardID:(id)arg2 cardIndex:(unsigned int)arg3 reportScene:(unsigned int)arg4 fromScene:(unsigned int)arg5;
+ (void)reportMktCardHomePageDataReportWithMchType:(unsigned int)arg1 mchID:(id)arg2 cardIndex:(unsigned int)arg3 cardID:(id)arg4 reportScene:(unsigned int)arg5 mchIndex:(unsigned int)arg6 sortRule:(unsigned int)arg7;
+ (void)reportMktCardPackageClickReport:(unsigned int)arg1;
+ (void)reportHomeVCMemberCardClick:(unsigned int)arg1 clickIndex:(unsigned int)arg2;
+ (void)compressMemberCardBgImgIfNeeded:(id)arg1 imgUrl:(id)arg2;
+ (id)memberCardScaledBgImgURL:(id)arg1;
+ (id)insertSpaceChar:(id)arg1 hasTransline:(_Bool)arg2;
+ (id)getBrandColor:(id)arg1;
+ (_Bool)bSupportOfflineDynamicCode:(id)arg1;
+ (_Bool)bSupportDynamicCode:(id)arg1;
+ (id)getHighlightedBgColor;
+ (_Bool)ShouldShowWaterMark:(id)arg1;
+ (_Bool)IsWCCardTransferAppServiceInPlane:(id)arg1;
+ (void)openMyPackageEntrance;
+ (void)uploadKVCardDisplayWithLog:(id)arg1;
+ (void)uploadKVPageNameForStayTime:(id)arg1 fromScene:(unsigned int)arg2 tpId:(id)arg3 cardId:(id)arg4 stayTime:(unsigned int)arg5;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned int)arg2 cardTpID:(id)arg3 cardID:(id)arg4;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned int)arg2 cardTpID:(id)arg3 cardID:(id)arg4 hasTip:(unsigned int)arg5 fromScene:(unsigned int)arg6 ChattingName:(id)arg7 HasAnnounce:(_Bool)arg8 svrRedDotTipsWording:(id)arg9;
+ (void)uploadEntryInfoById:(unsigned int)arg1 hasRedDot:(_Bool)arg2 hasNew:(_Bool)arg3 hasIcons:(_Bool)arg4 hasWords:(_Bool)arg5;
+ (void)upload11582Ope:(id)arg1 scence:(long long)arg2 cardType:(unsigned int)arg3 tpId:(id)arg4 cardId:(id)arg5 userName:(id)arg6;
+ (id)CardData2WCUploadTask:(id)arg1 CardExt:(id)arg2;
+ (void)mergeCardData:(id)arg1 cardItem:(id)arg2 toMessageWrap:(id)arg3;
+ (id)getCardDisplayAuxTitle:(id)arg1;
+ (id)getCardDisplaySubTitle:(id)arg1;
+ (id)getCardDisplayTitle:(id)arg1;
+ (id)getDistance:(unsigned int)arg1;
+ (id)getViewBackgroundColor;
+ (id)getListViewBackgroundColor;
+ (_Bool)isFromOutAppSence:(unsigned int)arg1;
+ (_Bool)isFromFriendFeedScene:(unsigned int)arg1;
+ (_Bool)isFromFriendRecommendScene:(unsigned int)arg1;
+ (_Bool)isFromFriendSence:(unsigned int)arg1;
+ (_Bool)isFromMyselfSence:(unsigned int)arg1;
+ (_Bool)isFromAppSence:(unsigned int)arg1;
+ (_Bool)isEnoughCardInfoToShow:(id)arg1;
+ (id)getDefaultCardTypeName:(unsigned int)arg1;
+ (_Bool)isShownInListCardStatus:(unsigned int)arg1;
+ (_Bool)isKnownGiftCardAppMsgType:(unsigned int)arg1;
+ (_Bool)isKnownCardType:(unsigned int)arg1;
+ (id)getWCMktMemberCardHistoryPageCachePath;
+ (id)getWCMktCouponHistoryPageCachePath;
+ (id)getWCMktCouponV2HomePageCachePath;
+ (id)getWCMktCouponHomePageCachePath;
+ (id)getWCMktMemberCardHomePageCachePath;
+ (id)getWCMktCardHomePageV2CachePath;
+ (id)getWCMktHisMchListCachePath;
+ (id)getWCMktInvalidTicketHomePageCachePath;
+ (id)getWCMktTicketHomePageCachePath;
+ (id)getWCMktCardHomePageCachePath;
+ (_Bool)GetWCCardPkgSyncInfoFileIsExist;
+ (id)getWCCardPkgConfigPath;
+ (id)getWCCardPkgEntryTipsPath;
+ (id)getWCCardPkgMsgTipsPath;
+ (id)getWCCardPkgDBPath;
+ (id)getWCCardPkgSyncBufferPath;
+ (id)getUserWCCardPkgRootDir;

@end

