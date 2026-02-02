//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdShareInfo, BaseRequest, NSData, NSString;

@interface AdClickRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adType; // @dynamic adType;
@property(nonatomic) unsigned int appInstallStatus; // @dynamic appInstallStatus;
@property(retain, nonatomic) NSData *atFriendSelfInfo; // @dynamic atFriendSelfInfo;
@property(retain, nonatomic) NSData *atFriendSourceInfo; // @dynamic atFriendSourceInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bssid; // @dynamic bssid;
@property(nonatomic) unsigned int clickAction; // @dynamic clickAction;
@property(nonatomic) int clickpos; // @dynamic clickpos;
@property(retain, nonatomic) NSString *commonDeviceId; // @dynamic commonDeviceId;
@property(retain, nonatomic) NSString *descxml; // @dynamic descxml;
@property(nonatomic) unsigned int elderMode; // @dynamic elderMode;
@property(nonatomic) unsigned long long exposureStartTime; // @dynamic exposureStartTime;
@property(nonatomic) unsigned int flipStatus; // @dynamic flipStatus;
@property(nonatomic) unsigned int followStatus; // @dynamic followStatus;
@property(nonatomic) unsigned int fontLevel; // @dynamic fontLevel;
@property(nonatomic) unsigned int forbidAutoPlay; // @dynamic forbidAutoPlay;
@property(retain, nonatomic) NSString *idfa; // @dynamic idfa;
@property(retain, nonatomic) NSString *idfv; // @dynamic idfv;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(retain, nonatomic) NSString *minishopUuid; // @dynamic minishopUuid;
@property(retain, nonatomic) NSString *oaid; // @dynamic oaid;
@property(retain, nonatomic) NSString *pkgName; // @dynamic pkgName;
@property(nonatomic) unsigned int relievedBuyShow; // @dynamic relievedBuyShow;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) AdShareInfo *shareInfo; // @dynamic shareInfo;
@property(retain, nonatomic) NSString *snsStatext; // @dynamic snsStatext;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) int subClickpos; // @dynamic subClickpos;
@property(retain, nonatomic) NSString *timelineSessionId; // @dynamic timelineSessionId;
@property(nonatomic) unsigned long long timestampMs; // @dynamic timestampMs;
@property(retain, nonatomic) NSString *ua; // @dynamic ua;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;
@property(nonatomic) unsigned int videoPlayTime; // @dynamic videoPlayTime;
@property(retain, nonatomic) NSString *viewid; // @dynamic viewid;
@property(retain, nonatomic) NSString *waid; // @dynamic waid;

@end

