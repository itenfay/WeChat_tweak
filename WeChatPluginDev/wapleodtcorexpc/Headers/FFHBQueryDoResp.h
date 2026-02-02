//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface FFHBQueryDoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *clearActionTips; // @dynamic clearActionTips;
@property(retain, nonatomic) NSString *clearTips; // @dynamic clearTips;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *shareUrl; // @dynamic shareUrl;
@property(nonatomic) unsigned int surplusNum; // @dynamic surplusNum;

@end

