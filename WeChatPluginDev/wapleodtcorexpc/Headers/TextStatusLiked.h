//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TextStatusLiked : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *encUsername; // @dynamic encUsername;
@property(retain, nonatomic) NSString *hashUsername; // @dynamic hashUsername;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(nonatomic) unsigned long long likeId; // @dynamic likeId;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

