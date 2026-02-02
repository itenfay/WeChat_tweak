//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface UpgradeChatRoomResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cardQuota; // @dynamic cardQuota;
@property(retain, nonatomic) NSString *chatRoomData; // @dynamic chatRoomData;
@property(nonatomic) unsigned int donateQuota; // @dynamic donateQuota;
@property(nonatomic) unsigned int maxCount; // @dynamic maxCount;
@property(nonatomic) unsigned int mobileQuota; // @dynamic mobileQuota;
@property(retain, nonatomic) NSString *resultMsg; // @dynamic resultMsg;
@property(nonatomic) unsigned int totalQuota; // @dynamic totalQuota;

@end

