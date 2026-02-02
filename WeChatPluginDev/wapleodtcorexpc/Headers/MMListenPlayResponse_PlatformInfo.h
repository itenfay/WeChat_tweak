//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenPlayResponse_PlatformInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) int isLimitFree; // @dynamic isLimitFree;
@property(nonatomic) int isPay; // @dynamic isPay;
@property(nonatomic) int isVip; // @dynamic isVip;
@property(nonatomic) int isWxvip; // @dynamic isWxvip;
@property(retain, nonatomic) NSString *songId; // @dynamic songId;

@end

