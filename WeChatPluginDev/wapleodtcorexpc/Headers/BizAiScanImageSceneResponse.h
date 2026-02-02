//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GoodsObject, NSString;

@interface BizAiScanImageSceneResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int aiscanJumpType; // @dynamic aiscanJumpType;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int catId; // @dynamic catId;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(retain, nonatomic) NSString *jumpKeyword; // @dynamic jumpKeyword;
@property(retain, nonatomic) GoodsObject *matchObj; // @dynamic matchObj;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;

@end

