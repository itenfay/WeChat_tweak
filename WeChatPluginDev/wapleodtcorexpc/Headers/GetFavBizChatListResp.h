//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, QyBaseResponse;

@interface GetFavBizChatListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *bizchatIdItem; // @dynamic bizchatIdItem;
@property(retain, nonatomic) QyBaseResponse *qyBaseResp; // @dynamic qyBaseResp;

@end

