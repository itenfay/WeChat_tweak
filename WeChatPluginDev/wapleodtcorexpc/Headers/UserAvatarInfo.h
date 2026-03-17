//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface UserAvatarInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int avatarLimit; // @dynamic avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @dynamic avatarList;
@property(retain, nonatomic) NSString *avatarWording; // @dynamic avatarWording;
@property(nonatomic) unsigned int defaultAvatarId; // @dynamic defaultAvatarId;
@property(retain, nonatomic) NSString *defaultHeadimgFileid; // @dynamic defaultHeadimgFileid;
@property(retain, nonatomic) NSString *defaultHeadimgUrl; // @dynamic defaultHeadimgUrl;
@property(nonatomic) _Bool isBanModifyAvatar; // @dynamic isBanModifyAvatar;
@property(retain, nonatomic) NSString *limitWording; // @dynamic limitWording;

@end

