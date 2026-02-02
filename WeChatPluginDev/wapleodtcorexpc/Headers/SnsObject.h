//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, PreDownloadInfo, SKBuiltinBuffer_t, SnsRedEnvelops, SnsWeAppInfo;

@interface SnsObject : WXPBGeneratedMessage
{
    int blackContactTagIdListMemoizedSerializedSize;
    int groupContactTagIdListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blackContactTagIdList; // @dynamic blackContactTagIdList;
@property(nonatomic) unsigned int blackContactTagIdListCount; // @dynamic blackContactTagIdListCount;
@property(retain, nonatomic) NSMutableArray *blackList; // @dynamic blackList;
@property(nonatomic) unsigned int blackListCount; // @dynamic blackListCount;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentUserList; // @dynamic commentUserList;
@property(nonatomic) unsigned int commentUserListCount; // @dynamic commentUserListCount;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned int flowerFlag; // @dynamic flowerFlag;
@property(retain, nonatomic) NSMutableArray *flowerUserList; // @dynamic flowerUserList;
@property(nonatomic) unsigned int flowerUserListCount; // @dynamic flowerUserListCount;
@property(retain, nonatomic) NSMutableArray *groupContactTagIdList; // @dynamic groupContactTagIdList;
@property(nonatomic) unsigned int groupContactTagIdListCount; // @dynamic groupContactTagIdListCount;
@property(nonatomic) unsigned int groupCount; // @dynamic groupCount;
@property(retain, nonatomic) NSMutableArray *groupList; // @dynamic groupList;
@property(retain, nonatomic) NSMutableArray *groupUser; // @dynamic groupUser;
@property(nonatomic) unsigned int groupUserCount; // @dynamic groupUserCount;
@property(nonatomic) unsigned int guideFinder; // @dynamic guideFinder;
@property(nonatomic) unsigned int guideQw; // @dynamic guideQw;
@property(nonatomic) unsigned int guideTop; // @dynamic guideTop;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int inTopList; // @dynamic inTopList;
@property(nonatomic) unsigned int isNotRichText; // @dynamic isNotRichText;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(retain, nonatomic) NSMutableArray *likeUserList; // @dynamic likeUserList;
@property(nonatomic) unsigned int likeUserListCount; // @dynamic likeUserListCount;
@property(retain, nonatomic) NSMutableArray *newWithTaList; // @dynamic newWithTaList;
@property(nonatomic) unsigned int newWithTaListCount; // @dynamic newWithTaListCount;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int noChange; // @dynamic noChange;
@property(retain, nonatomic) SKBuiltinBuffer_t *objectDesc; // @dynamic objectDesc;
@property(retain, nonatomic) SKBuiltinBuffer_t *objectOperations; // @dynamic objectOperations;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(retain, nonatomic) PreDownloadInfo *preDownloadInfo; // @dynamic preDownloadInfo;
@property(nonatomic) unsigned long long referId; // @dynamic referId;
@property(retain, nonatomic) NSString *referUsername; // @dynamic referUsername;
@property(retain, nonatomic) SnsRedEnvelops *snsRedEnvelops; // @dynamic snsRedEnvelops;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) SnsWeAppInfo *weAppInfo; // @dynamic weAppInfo;
@property(nonatomic) unsigned int weiShangFeedType; // @dynamic weiShangFeedType;
@property(nonatomic) unsigned int weiShangSellerType; // @dynamic weiShangSellerType;
@property(nonatomic) unsigned int weiShangVideoSourceType; // @dynamic weiShangVideoSourceType;
@property(retain, nonatomic) NSMutableArray *withChatroomList; // @dynamic withChatroomList;
@property(nonatomic) unsigned int withChatroomListCount; // @dynamic withChatroomListCount;
@property(nonatomic) unsigned int withTaHasOther; // @dynamic withTaHasOther;
@property(retain, nonatomic) NSMutableArray *withTaList; // @dynamic withTaList;
@property(nonatomic) unsigned int withTaListCount; // @dynamic withTaListCount;
@property(nonatomic) unsigned int withUserCount; // @dynamic withUserCount;
@property(retain, nonatomic) NSMutableArray *withUserList; // @dynamic withUserList;
@property(nonatomic) unsigned int withUserListCount; // @dynamic withUserListCount;

@end

