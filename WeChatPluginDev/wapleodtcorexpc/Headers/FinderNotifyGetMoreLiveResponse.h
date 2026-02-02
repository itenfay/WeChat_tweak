//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveDiscoverPreloadConfig, FinderLiveTabInfo, FinderNotifyGetMoreLiveConfig, NSData, NSMutableArray, NSString;

@interface FinderNotifyGetMoreLiveResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderNotifyGetMoreLiveConfig *config; // @dynamic config;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) _Bool isEnable; // @dynamic isEnable;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @dynamic jumpNavliveBuffer;
@property(retain, nonatomic) FinderLiveTabInfo *jumpTabInfo; // @dynamic jumpTabInfo;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSString *leftContent; // @dynamic leftContent;
@property(retain, nonatomic) FinderLiveDiscoverPreloadConfig *liveNoticePreloadConfig; // @dynamic liveNoticePreloadConfig;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) NSMutableArray *objects; // @dynamic objects;
@property(nonatomic) unsigned int reqInterval; // @dynamic reqInterval;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;

@end

