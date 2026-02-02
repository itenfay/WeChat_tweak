//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SnsServerConfig, SnsUserInfo, SnsWwUserInfo;

@interface SnsWwUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long continueId; // @dynamic continueId;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned long long limitedId; // @dynamic limitedId;
@property(nonatomic) unsigned int newRequestTime; // @dynamic newRequestTime;
@property(nonatomic) unsigned int objectCount; // @dynamic objectCount;
@property(nonatomic) unsigned int objectCountForSameMd5; // @dynamic objectCountForSameMd5;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int objectTotalCount; // @dynamic objectTotalCount;
@property(nonatomic) _Bool prePageDayEndFlag; // @dynamic prePageDayEndFlag;
@property(retain, nonatomic) NSString *retTips; // @dynamic retTips;
@property(retain, nonatomic) SnsServerConfig *serverConfig; // @dynamic serverConfig;
@property(retain, nonatomic) SnsUserInfo *snsUserInfo; // @dynamic snsUserInfo;
@property(retain, nonatomic) SnsWwUserInfo *snsWwUserInfo; // @dynamic snsWwUserInfo;
@property(nonatomic) unsigned int yearMonthInfoCount; // @dynamic yearMonthInfoCount;
@property(retain, nonatomic) NSMutableArray *yearMonthInfoList; // @dynamic yearMonthInfoList;

@end

