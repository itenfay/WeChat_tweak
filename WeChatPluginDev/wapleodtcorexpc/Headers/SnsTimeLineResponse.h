//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t, SnsDragon2024Info, SnsServerConfig;

@interface SnsTimeLineResponse : WXPBGeneratedMessage
{
    int idListForCheckUnreadMemoizedSerializedSize;
    int idFlagListForCheckUnreadMemoizedSerializedSize;
}

+ (void)initialize;
- (id)shortDebugString;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adOpList; // @dynamic adOpList;
@property(nonatomic) unsigned long long adSessionId; // @dynamic adSessionId;
@property(nonatomic) unsigned int advertiseCount; // @dynamic advertiseCount;
@property(retain, nonatomic) NSMutableArray *advertiseList; // @dynamic advertiseList;
@property(nonatomic) unsigned int advertiseOperationCount; // @dynamic advertiseOperationCount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int controlFlag; // @dynamic controlFlag;
@property(nonatomic) unsigned int countForCheckUnread; // @dynamic countForCheckUnread;
@property(nonatomic) unsigned int delAdvertiseCount; // @dynamic delAdvertiseCount;
@property(retain, nonatomic) NSMutableArray *delAdvertiseList; // @dynamic delAdvertiseList;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(retain, nonatomic) NSMutableArray *idFlagListForCheckUnread; // @dynamic idFlagListForCheckUnread;
@property(retain, nonatomic) NSMutableArray *idListForCheckUnread; // @dynamic idListForCheckUnread;
@property(nonatomic) unsigned int newRequestTime; // @dynamic newRequestTime;
@property(nonatomic) unsigned int objectCount; // @dynamic objectCount;
@property(nonatomic) unsigned int objectCountForSameMd5; // @dynamic objectCountForSameMd5;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int recCount; // @dynamic recCount;
@property(retain, nonatomic) NSMutableArray *recList; // @dynamic recList;
@property(retain, nonatomic) SnsServerConfig *serverConfig; // @dynamic serverConfig;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;
@property(retain, nonatomic) SnsDragon2024Info *snsDragon2024Info; // @dynamic snsDragon2024Info;
@property(retain, nonatomic) SKBuiltinBuffer_t *weiShangInfo; // @dynamic weiShangInfo;

@end

