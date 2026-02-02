//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, LiveExtInfo, NSData, NSMutableArray;

@interface GetLiveMessageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) LiveExtInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int likeCnt; // @dynamic likeCnt;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(retain, nonatomic) NSMutableArray *messages; // @dynamic messages;
@property(nonatomic) _Bool needUpdate; // @dynamic needUpdate;
@property(nonatomic) unsigned int onlineCnt; // @dynamic onlineCnt;
@property(retain, nonatomic) NSMutableArray *onlineHeadimgList; // @dynamic onlineHeadimgList;

@end

