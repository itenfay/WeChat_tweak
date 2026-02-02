//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdExposureInfo, AdExposureSocialInfo, BaseRequest, NSData, NSString;

@interface AdExposureRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) float adHeight; // @dynamic adHeight;
@property(nonatomic) unsigned int adType; // @dynamic adType;
@property(nonatomic) unsigned int appInstallStatus; // @dynamic appInstallStatus;
@property(retain, nonatomic) NSData *atFriendSelfInfo; // @dynamic atFriendSelfInfo;
@property(retain, nonatomic) NSData *atFriendSourceInfo; // @dynamic atFriendSourceInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bssid; // @dynamic bssid;
@property(retain, nonatomic) NSString *commonDeviceId; // @dynamic commonDeviceId;
@property(retain, nonatomic) NSString *descxml; // @dynamic descxml;
@property(nonatomic) unsigned int elderMode; // @dynamic elderMode;
@property(nonatomic) unsigned int exposureCnt; // @dynamic exposureCnt;
@property(nonatomic) unsigned int exposureDuration; // @dynamic exposureDuration;
@property(retain, nonatomic) AdExposureInfo *exposureInfo; // @dynamic exposureInfo;
@property(nonatomic) unsigned long long feedDuration; // @dynamic feedDuration;
@property(nonatomic) unsigned long long feedFullDuration; // @dynamic feedFullDuration;
@property(nonatomic) unsigned int flipStatus; // @dynamic flipStatus;
@property(nonatomic) unsigned int followStatus; // @dynamic followStatus;
@property(nonatomic) unsigned int fontLevel; // @dynamic fontLevel;
@property(nonatomic) unsigned int forbidAutoPlay; // @dynamic forbidAutoPlay;
@property(retain, nonatomic) NSString *idfa; // @dynamic idfa;
@property(retain, nonatomic) NSString *idfv; // @dynamic idfv;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(retain, nonatomic) NSString *oaid; // @dynamic oaid;
@property(retain, nonatomic) NSString *pkgName; // @dynamic pkgName;
@property(nonatomic) unsigned int relievedBuyShow; // @dynamic relievedBuyShow;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) float screenHeight; // @dynamic screenHeight;
@property(nonatomic) float screenWidth; // @dynamic screenWidth;
@property(retain, nonatomic) NSString *snsStatext; // @dynamic snsStatext;
@property(retain, nonatomic) AdExposureSocialInfo *socialInfo; // @dynamic socialInfo;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) unsigned int timelineIndex; // @dynamic timelineIndex;
@property(retain, nonatomic) NSString *timelineSessionId; // @dynamic timelineSessionId;
@property(nonatomic) unsigned long long timerFullDuration; // @dynamic timerFullDuration;
@property(nonatomic) unsigned long long timerHalfDuration; // @dynamic timerHalfDuration;
@property(nonatomic) unsigned long long timestampMs; // @dynamic timestampMs;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *ua; // @dynamic ua;
@property(nonatomic) unsigned int userInterfaceStyle; // @dynamic userInterfaceStyle;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;
@property(retain, nonatomic) NSString *viewid; // @dynamic viewid;
@property(retain, nonatomic) NSString *waid; // @dynamic waid;

@end

