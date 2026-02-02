//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BGMInfo, FinderRingBack, FinderRingBackHitInfo, NSData, NSString, NewRingBackBGMInfo, RingBackRecommendReasonInfo;

@interface FinderRingBackDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authIconUrl; // @dynamic authIconUrl;
@property(nonatomic) unsigned int authProfessionType; // @dynamic authProfessionType;
@property(retain, nonatomic) NSData *backendContextInfo; // @dynamic backendContextInfo;
@property(retain, nonatomic) BGMInfo *bgminfo; // @dynamic bgminfo;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *finderAuthProfession; // @dynamic finderAuthProfession;
@property(nonatomic) unsigned int finderAuthProfessionType; // @dynamic finderAuthProfessionType;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) FinderRingBackHitInfo *hitInfo; // @dynamic hitInfo;
@property(retain, nonatomic) NewRingBackBGMInfo *newBgminfo; // @dynamic newBgminfo;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *originalTitle; // @dynamic originalTitle;
@property(retain, nonatomic) RingBackRecommendReasonInfo *recommendReasonInfo; // @dynamic recommendReasonInfo;
@property(nonatomic) unsigned int recommendReasonType; // @dynamic recommendReasonType;
@property(retain, nonatomic) FinderRingBack *ringBack; // @dynamic ringBack;
@property(nonatomic) unsigned long long settingCount; // @dynamic settingCount;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(nonatomic) unsigned long long usedByFriendCount; // @dynamic usedByFriendCount;

@end

