//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenUserInfo, NSString;

@interface MMListenRecommendInfo_User : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *hashusername; // @dynamic hashusername;
@property(retain, nonatomic) NSString *headimg; // @dynamic headimg;
@property(nonatomic) _Bool isAppreciated; // @dynamic isAppreciated;
@property(nonatomic) _Bool isLike; // @dynamic isLike;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned long long uin; // @dynamic uin;
@property(retain, nonatomic) MMListenUserInfo *userInfo; // @dynamic userInfo;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

