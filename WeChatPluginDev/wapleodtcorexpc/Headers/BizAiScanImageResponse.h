//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GoodsObject, NSData, NSString;

@interface BizAiScanImageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int aiscanJumpType; // @dynamic aiscanJumpType;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *businessBuffer; // @dynamic businessBuffer;
@property(nonatomic) unsigned int catId; // @dynamic catId;
@property(nonatomic) unsigned int clientReturnType; // @dynamic clientReturnType;
@property(nonatomic) _Bool forceJump; // @dynamic forceJump;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(retain, nonatomic) GoodsObject *matchObj; // @dynamic matchObj;
@property(nonatomic) _Bool needPoi; // @dynamic needPoi;
@property(nonatomic) _Bool needUserCrop; // @dynamic needUserCrop;
@property(nonatomic) unsigned int networkLimitedTime; // @dynamic networkLimitedTime;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int scanid; // @dynamic scanid;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;
@property(retain, nonatomic) NSString *wxaAppid; // @dynamic wxaAppid;
@property(retain, nonatomic) NSString *wxaPath; // @dynamic wxaPath;

@end

