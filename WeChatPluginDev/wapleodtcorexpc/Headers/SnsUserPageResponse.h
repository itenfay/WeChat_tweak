//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SnsDragon2024Info, SnsServerConfig, SnsUserInfo;

@interface SnsUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long continueId; // @dynamic continueId;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned long long limitedId; // @dynamic limitedId;
@property(retain, nonatomic) NSString *newEndWording; // @dynamic newEndWording;
@property(nonatomic) unsigned int newRequestTime; // @dynamic newRequestTime;
@property(nonatomic) unsigned int objectCount; // @dynamic objectCount;
@property(nonatomic) unsigned int objectCountForSameMd5; // @dynamic objectCountForSameMd5;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int objectTotalCount; // @dynamic objectTotalCount;
@property(nonatomic) _Bool prePageDayEndFlag; // @dynamic prePageDayEndFlag;
@property(retain, nonatomic) NSString *retTips; // @dynamic retTips;
@property(retain, nonatomic) SnsServerConfig *serverConfig; // @dynamic serverConfig;
@property(nonatomic) unsigned int showWithTaEntrance; // @dynamic showWithTaEntrance;
@property(retain, nonatomic) SnsDragon2024Info *snsDragon2024Info; // @dynamic snsDragon2024Info;
@property(retain, nonatomic) SnsUserInfo *snsUserInfo; // @dynamic snsUserInfo;
@property(nonatomic) unsigned long long topListNextPageMaxId; // @dynamic topListNextPageMaxId;
@property(nonatomic) unsigned int topListObjectCount; // @dynamic topListObjectCount;
@property(retain, nonatomic) NSMutableArray *topListObjectList; // @dynamic topListObjectList;
@property(nonatomic) unsigned int yearMonthInfoCount; // @dynamic yearMonthInfoCount;
@property(retain, nonatomic) NSMutableArray *yearMonthInfoList; // @dynamic yearMonthInfoList;

@end

