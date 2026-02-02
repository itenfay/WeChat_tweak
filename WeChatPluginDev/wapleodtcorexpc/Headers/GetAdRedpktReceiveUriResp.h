//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetAdRedpktReceiveUriResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *coverName; // @dynamic coverName;
@property(retain, nonatomic) NSString *coverPictureUrl; // @dynamic coverPictureUrl;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) _Bool empty; // @dynamic empty;
@property(nonatomic) _Bool hasReceived; // @dynamic hasReceived;
@property(nonatomic) _Bool invalid; // @dynamic invalid;
@property(nonatomic) unsigned long long receiveBeginTime; // @dynamic receiveBeginTime;
@property(nonatomic) unsigned long long receiveExpiredTime; // @dynamic receiveExpiredTime;

@end

