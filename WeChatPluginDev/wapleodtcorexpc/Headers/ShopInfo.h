//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DetailLink, NSMutableArray, NSString;

@interface ShopInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool canJump; // @dynamic canJump;
@property(retain, nonatomic) NSString *platformHeadImg; // @dynamic platformHeadImg;
@property(retain, nonatomic) NSString *platformName; // @dynamic platformName;
@property(retain, nonatomic) NSString *shopHeadImg; // @dynamic shopHeadImg;
@property(retain, nonatomic) NSString *shopName; // @dynamic shopName;
@property(retain, nonatomic) DetailLink *shopWxaInfo; // @dynamic shopWxaInfo;
@property(retain, nonatomic) NSMutableArray *tailLabel; // @dynamic tailLabel;

@end

