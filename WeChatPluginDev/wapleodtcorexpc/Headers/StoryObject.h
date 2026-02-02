//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface StoryObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blackList; // @dynamic blackList;
@property(nonatomic) unsigned int blackListCount; // @dynamic blackListCount;
@property(nonatomic) unsigned int bubbleCount; // @dynamic bubbleCount;
@property(retain, nonatomic) NSMutableArray *bubbleList; // @dynamic bubbleList;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(nonatomic) unsigned int featuredTime; // @dynamic featuredTime;
@property(retain, nonatomic) NSMutableArray *groupUser; // @dynamic groupUser;
@property(nonatomic) unsigned int groupUserCount; // @dynamic groupUserCount;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int isFeatured; // @dynamic isFeatured;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) SKBuiltinBuffer_t *objDesc; // @dynamic objDesc;
@property(nonatomic) unsigned int objType; // @dynamic objType;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int visiableSelfOnly; // @dynamic visiableSelfOnly;
@property(nonatomic) unsigned int visitorCount; // @dynamic visitorCount;
@property(retain, nonatomic) NSMutableArray *visitorList; // @dynamic visitorList;

@end

