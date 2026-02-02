//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmotionPrice, NSString;

@interface AskForRewardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;
@property(retain, nonatomic) EmotionPrice *price; // @dynamic price;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

