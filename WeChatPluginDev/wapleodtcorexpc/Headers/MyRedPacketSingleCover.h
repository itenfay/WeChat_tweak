//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface MyRedPacketSingleCover : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *receiveUrl; // @dynamic receiveUrl;
@property(nonatomic) unsigned int remain; // @dynamic remain;

@end

