//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, CanvasInfo, NSMutableArray, NSString, OpenSDKInfo, SKBuiltinBuffer_t, SnsExtStatData, SnsPostCtocUploadInfo, SnsPostOperationFields, SnsWeAppInfo, TwitterInfo;

@interface SnsPostRequest : WXPBGeneratedMessage
{
    int blackContactTagIdListMemoizedSerializedSize;
    int groupContactTagIdListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *blackContactTagIdList; // @dynamic blackContactTagIdList;
@property(nonatomic) unsigned int blackContactTagIdListCount; // @dynamic blackContactTagIdListCount;
@property(retain, nonatomic) NSMutableArray *blackList; // @dynamic blackList;
@property(nonatomic) unsigned int blackListCount; // @dynamic blackListCount;
@property(retain, nonatomic) CanvasInfo *canvasInfo; // @dynamic canvasInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) SnsPostCtocUploadInfo *ctocUploadInfo; // @dynamic ctocUploadInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) SnsExtStatData *extStatData; // @dynamic extStatData;
@property(retain, nonatomic) NSString *fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSMutableArray *groupContactTagIdList; // @dynamic groupContactTagIdList;
@property(nonatomic) unsigned int groupContactTagIdListCount; // @dynamic groupContactTagIdListCount;
@property(nonatomic) unsigned int groupCount; // @dynamic groupCount;
@property(retain, nonatomic) NSMutableArray *groupIds; // @dynamic groupIds;
@property(retain, nonatomic) NSMutableArray *groupUser; // @dynamic groupUser;
@property(nonatomic) unsigned int groupUserCount; // @dynamic groupUserCount;
@property(retain, nonatomic) NSMutableArray *mediaInfo; // @dynamic mediaInfo;
@property(nonatomic) unsigned int mediaInfoCount; // @dynamic mediaInfoCount;
@property(retain, nonatomic) SKBuiltinBuffer_t *objectDesc; // @dynamic objectDesc;
@property(nonatomic) unsigned int objectSource; // @dynamic objectSource;
@property(retain, nonatomic) OpenSDKInfo *openSdkinfo; // @dynamic openSdkinfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *poiInfo; // @dynamic poiInfo;
@property(nonatomic) unsigned int postBgimgType; // @dynamic postBgimgType;
@property(nonatomic) unsigned int privacy; // @dynamic privacy;
@property(nonatomic) unsigned long long referId; // @dynamic referId;
@property(retain, nonatomic) NSString *reportData; // @dynamic reportData;
@property(retain, nonatomic) SKBuiltinBuffer_t *snsExtSpamInfo; // @dynamic snsExtSpamInfo;
@property(retain, nonatomic) SnsPostOperationFields *snsPostOperationFields; // @dynamic snsPostOperationFields;
@property(nonatomic) unsigned int syncFlag; // @dynamic syncFlag;
@property(retain, nonatomic) TwitterInfo *twitterInfo; // @dynamic twitterInfo;
@property(retain, nonatomic) SnsWeAppInfo *weAppInfo; // @dynamic weAppInfo;
@property(retain, nonatomic) NSMutableArray *withChatroomList; // @dynamic withChatroomList;
@property(nonatomic) unsigned int withChatroomListCount; // @dynamic withChatroomListCount;
@property(retain, nonatomic) NSMutableArray *withTaUserList; // @dynamic withTaUserList;
@property(nonatomic) unsigned int withTaUserListCount; // @dynamic withTaUserListCount;
@property(retain, nonatomic) NSMutableArray *withUserList; // @dynamic withUserList;
@property(nonatomic) unsigned int withUserListCount; // @dynamic withUserListCount;

@end

