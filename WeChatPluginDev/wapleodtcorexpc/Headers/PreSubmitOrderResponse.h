//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface PreSubmitOrderResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionAttrCount; // @dynamic actionAttrCount;
@property(retain, nonatomic) NSMutableArray *actionAttrs; // @dynamic actionAttrs;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *express; // @dynamic express;
@property(nonatomic) unsigned int expressCount; // @dynamic expressCount;
@property(retain, nonatomic) NSString *lockId; // @dynamic lockId;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

