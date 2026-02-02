//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface ChatRoomTopMsgGetDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *overLimitIds; // @dynamic overLimitIds;
@property(retain, nonatomic) NSData *topMsgInfo; // @dynamic topMsgInfo;
@property(retain, nonatomic) NSMutableArray *unfoundIds; // @dynamic unfoundIds;

@end

