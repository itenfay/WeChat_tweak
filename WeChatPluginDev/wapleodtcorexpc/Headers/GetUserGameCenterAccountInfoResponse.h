//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AccountInfo, BaseResponse, JumpInfo;

@interface GetUserGameCenterAccountInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AccountInfo *accountInfo; // @dynamic accountInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @dynamic jumpInfo;

@end

