//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, QyBaseResponse;

@interface BizTransferResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *cmdData; // @dynamic cmdData;
@property(nonatomic) unsigned int cmdId; // @dynamic cmdId;
@property(retain, nonatomic) QyBaseResponse *qyBaseResp; // @dynamic qyBaseResp;

@end

