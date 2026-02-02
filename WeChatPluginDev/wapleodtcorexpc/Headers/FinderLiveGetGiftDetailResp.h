//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGift, NSData, NSString;

@interface FinderLiveGetGiftDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveGift *gift; // @dynamic gift;
@property(retain, nonatomic) NSString *packageId; // @dynamic packageId;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSData *rewardExtInfo; // @dynamic rewardExtInfo;

@end

