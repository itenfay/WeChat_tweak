//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface PstnSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int calledStatus; // @dynamic calledStatus;
@property(nonatomic) unsigned int calledStatusSyncKey; // @dynamic calledStatusSyncKey;
@property(nonatomic) unsigned int dtmfPayloadType; // @dynamic dtmfPayloadType;
@property(nonatomic) unsigned int errCode; // @dynamic errCode;
@property(nonatomic) unsigned int errLevel; // @dynamic errLevel;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *errTitle; // @dynamic errTitle;
@property(nonatomic) unsigned int memberId; // @dynamic memberId;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;

@end

