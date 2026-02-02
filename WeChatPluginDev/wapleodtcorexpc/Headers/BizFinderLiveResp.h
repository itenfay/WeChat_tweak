//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface BizFinderLiveResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int funcFlag; // @dynamic funcFlag;
@property(nonatomic) unsigned int keepDataInterval; // @dynamic keepDataInterval;
@property(nonatomic) unsigned int listRefreshInterval; // @dynamic listRefreshInterval;
@property(retain, nonatomic) NSMutableArray *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) NSData *pagingBuffer; // @dynamic pagingBuffer;
@property(nonatomic) unsigned int specifiedRefreshInterval; // @dynamic specifiedRefreshInterval;

@end

