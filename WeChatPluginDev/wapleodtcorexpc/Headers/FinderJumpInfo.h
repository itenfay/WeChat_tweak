//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfoRedDot, FinderJumpInfo_FlutterInfo, FinderJumpInfo_Html5Info, FinderJumpInfo_LiteApp, FinderJumpInfo_MiniAppInfo, FinderJumpInfo_NativeInfo, FinderJumpInfo_OnlineHelp, FinderJumpInfo_SchemaInfo, NSData, NSMutableArray, NSString;

@interface FinderJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (_Bool)isUserCloseBanner:(id)arg1;
+ (void)addUserCloseBanner:(id)arg1;
+ (id)filterCarouselBannerList:(id)arg1;
+ (id)filterUserClosedBanner:(id)arg1;
- (id)lastBufferString;
- (_Bool)isMoreLiveBanner;
- (_Bool)isCarouselBanner;
- (_Bool)isMinifyRoomControlBanner;
- (id)extInfoModel;
- (_Bool)canShowTemplateEntry;
- (id)genVideoTemplateData;
- (_Bool)isVideoTemplateJumpInfo;

// Remaining properties
@property(nonatomic) unsigned int bannerType; // @dynamic bannerType;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *clickButtonName; // @dynamic clickButtonName;
@property(nonatomic) unsigned int delayPreloadTime; // @dynamic delayPreloadTime;
@property(nonatomic) unsigned int dislike; // @dynamic dislike;
@property(nonatomic) unsigned int effectiveDuration; // @dynamic effectiveDuration;
@property(nonatomic) unsigned int expiredTs; // @dynamic expiredTs;
@property(retain, nonatomic) NSData *extBuff; // @dynamic extBuff;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int extType; // @dynamic extType;
@property(retain, nonatomic) FinderJumpInfo_FlutterInfo *flutterInfo; // @dynamic flutterInfo;
@property(retain, nonatomic) NSString *groupKey; // @dynamic groupKey;
@property(retain, nonatomic) FinderJumpInfo_Html5Info *html5Info; // @dynamic html5Info;
@property(retain, nonatomic) NSString *iconName; // @dynamic iconName;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *iconUrlBg; // @dynamic iconUrlBg;
@property(retain, nonatomic) NSString *iconUrlDark; // @dynamic iconUrlDark;
@property(retain, nonatomic) NSString *jumpId; // @dynamic jumpId;
@property(nonatomic) unsigned int jumpinfoType; // @dynamic jumpinfoType;
@property(retain, nonatomic) FinderJumpInfo_LiteApp *liteAppInfo; // @dynamic liteAppInfo;
@property(retain, nonatomic) FinderJumpInfo_MiniAppInfo *miniAppInfo; // @dynamic miniAppInfo;
@property(retain, nonatomic) FinderJumpInfo_NativeInfo *nativeInfo; // @dynamic nativeInfo;
@property(nonatomic) _Bool needAutoShow; // @dynamic needAutoShow;
@property(nonatomic) _Bool needPreload; // @dynamic needPreload;
@property(retain, nonatomic) FinderJumpInfo_OnlineHelp *onlineHelpInfo; // @dynamic onlineHelpInfo;
@property(retain, nonatomic) NSString *openPopupTitle; // @dynamic openPopupTitle;
@property(retain, nonatomic) NSString *openPopupWording; // @dynamic openPopupWording;
@property(retain, nonatomic) NSString *pagIconUrl; // @dynamic pagIconUrl;
@property(nonatomic) unsigned int position; // @dynamic position;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(retain, nonatomic) FinderJumpInfoRedDot *redDot; // @dynamic redDot;
@property(nonatomic) unsigned int redPacketType; // @dynamic redPacketType;
@property(retain, nonatomic) NSString *reportInfo; // @dynamic reportInfo;
@property(retain, nonatomic) FinderJumpInfo_SchemaInfo *schemaInfo; // @dynamic schemaInfo;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *style; // @dynamic style;
@property(retain, nonatomic) NSMutableArray *supportDeviceList; // @dynamic supportDeviceList;
@property(nonatomic) unsigned int supportShare; // @dynamic supportShare;
@property(retain, nonatomic) NSString *uiFingerprint; // @dynamic uiFingerprint;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

