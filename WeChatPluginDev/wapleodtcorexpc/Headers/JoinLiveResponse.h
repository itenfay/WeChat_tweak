//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, LiveSdkInfo, NSData;

@interface JoinLiveResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @dynamic liveSdkInfo;

@end

