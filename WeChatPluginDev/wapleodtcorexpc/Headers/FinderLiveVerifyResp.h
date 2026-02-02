//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface FinderLiveVerifyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isVerified; // @dynamic isVerified;
@property(retain, nonatomic) NSString *realnameUrl; // @dynamic realnameUrl;
@property(retain, nonatomic) NSData *ticket; // @dynamic ticket;

@end

