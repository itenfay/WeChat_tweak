//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenJumpInfo, NSString;

@interface MMListenBannerInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(retain, nonatomic) MMListenJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) _Bool showArrow; // @dynamic showArrow;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

