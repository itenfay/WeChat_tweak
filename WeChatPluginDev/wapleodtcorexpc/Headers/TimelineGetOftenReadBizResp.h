//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface TimelineGetOftenReadBizResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *bizInfoList; // @dynamic bizInfoList;
@property(nonatomic) unsigned int displayCtrlFlag; // @dynamic displayCtrlFlag;
@property(nonatomic) unsigned int greenPointStayTimeInSec; // @dynamic greenPointStayTimeInSec;
@property(retain, nonatomic) NSMutableArray *normalBizInfoList; // @dynamic normalBizInfoList;
@property(retain, nonatomic) NSMutableArray *seldomReadBizInfoList; // @dynamic seldomReadBizInfoList;
@property(nonatomic) unsigned int serverRankOftenReadBiz; // @dynamic serverRankOftenReadBiz;
@property(nonatomic) _Bool showFinderLive; // @dynamic showFinderLive;
@property(nonatomic) unsigned int specifiedRefreshInterval; // @dynamic specifiedRefreshInterval;

@end

