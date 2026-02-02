//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, CreateSceneInfo, FinderBaseRequest, FinderContactExtInfo, NSData, NSString;

@interface FinderCreateUserRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(retain, nonatomic) CreateSceneInfo *createInfo; // @dynamic createInfo;
@property(retain, nonatomic) FinderContactExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *headImg; // @dynamic headImg;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int notRecommendToFriend; // @dynamic notRecommendToFriend;
@property(nonatomic) unsigned int notShowLocationSwitch; // @dynamic notShowLocationSwitch;
@property(nonatomic) unsigned int notShowSexSwitch; // @dynamic notShowSexSwitch;
@property(retain, nonatomic) FinderContactExtInfo *registerInfo; // @dynamic registerInfo;
@property(nonatomic) unsigned int showFinderInWx; // @dynamic showFinderInWx;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;

@end

