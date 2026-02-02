//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContactExtInfo, FinderNotRecommendInfo, NSString;

@interface FinderModUserInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int birthDay; // @dynamic birthDay;
@property(nonatomic) unsigned int birthMonth; // @dynamic birthMonth;
@property(nonatomic) unsigned int birthYear; // @dynamic birthYear;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) unsigned int commentPrivacySwitch; // @dynamic commentPrivacySwitch;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) unsigned int displayMpIdentitySwitch; // @dynamic displayMpIdentitySwitch;
@property(nonatomic) unsigned int enableMaterialPoiSwitch; // @dynamic enableMaterialPoiSwitch;
@property(nonatomic) unsigned int enableMiaojianReferenceSwitch; // @dynamic enableMiaojianReferenceSwitch;
@property(nonatomic) unsigned int finderVideoSwitch; // @dynamic finderVideoSwitch;
@property(nonatomic) unsigned int greetPrivacySwitch; // @dynamic greetPrivacySwitch;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(nonatomic) unsigned int interactionPrivacySwitch; // @dynamic interactionPrivacySwitch;
@property(nonatomic) unsigned int mentionedSwitch; // @dynamic mentionedSwitch;
@property(nonatomic) unsigned int miniappReferenceSwitch; // @dynamic miniappReferenceSwitch;
@property(nonatomic) unsigned int musicMvNotReproduceSwitch; // @dynamic musicMvNotReproduceSwitch;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderNotRecommendInfo *notRecommendInfo; // @dynamic notRecommendInfo;
@property(nonatomic) unsigned int notShowBirthSwitch; // @dynamic notShowBirthSwitch;
@property(nonatomic) unsigned int notShowLocationSwitch; // @dynamic notShowLocationSwitch;
@property(nonatomic) unsigned int notShowSexSwitch; // @dynamic notShowSexSwitch;
@property(nonatomic) unsigned int privateSwitch; // @dynamic privateSwitch;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) FinderContactExtInfo *registerInfo; // @dynamic registerInfo;
@property(nonatomic) int sex; // @dynamic sex;
@property(nonatomic) unsigned int showFinderInWxSwitch; // @dynamic showFinderInWxSwitch;
@property(nonatomic) unsigned int showLiveDataAtFinderProfileSwitch; // @dynamic showLiveDataAtFinderProfileSwitch;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;

@end

