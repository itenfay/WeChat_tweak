//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CustomizedInfo, FBFriend, NSString, SnsUserInfo;

@interface MFriend : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSString *albumBgimgId; // @dynamic albumBgimgId;
@property(nonatomic) unsigned int albumFlag; // @dynamic albumFlag;
@property(nonatomic) unsigned int albumStyle; // @dynamic albumStyle;
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) NSString *antispamTicket; // @dynamic antispamTicket;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @dynamic bigHeadImgUrl;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) CustomizedInfo *customizedInfo; // @dynamic customizedInfo;
@property(retain, nonatomic) FBFriend *fbinfo; // @dynamic fbinfo;
@property(retain, nonatomic) NSString *mobileMd5; // @dynamic mobileMd5;
@property(retain, nonatomic) NSString *myBrandList; // @dynamic myBrandList;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int personalCard; // @dynamic personalCard;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(nonatomic) int sex; // @dynamic sex;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @dynamic smallHeadImgUrl;
@property(retain, nonatomic) SnsUserInfo *snsUserInfo; // @dynamic snsUserInfo;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

