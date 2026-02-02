//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenHalfPanelInfo, NSData, NSString;

@interface MMListenMembershipJoinResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adContinueWording; // @dynamic adContinueWording;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long membershipExpireTimeS; // @dynamic membershipExpireTimeS;
@property(retain, nonatomic) NSData *respBuffer; // @dynamic respBuffer;
@property(retain, nonatomic) MMListenHalfPanelInfo *succHalfPanel; // @dynamic succHalfPanel;

@end

