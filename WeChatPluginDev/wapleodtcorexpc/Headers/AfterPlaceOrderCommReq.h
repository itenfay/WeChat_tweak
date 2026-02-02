//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FavorComposeInfo, NSMutableArray, NSString;

@interface AfterPlaceOrderCommReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) NSMutableArray *extraBuyDetailInfos; // @dynamic extraBuyDetailInfos;
@property(retain, nonatomic) NSString *f2FId; // @dynamic f2FId;
@property(retain, nonatomic) FavorComposeInfo *favorComposeInfo; // @dynamic favorComposeInfo;
@property(retain, nonatomic) NSString *payokChecksign; // @dynamic payokChecksign;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(nonatomic) unsigned int scanScene; // @dynamic scanScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int totalAmount; // @dynamic totalAmount;
@property(retain, nonatomic) NSString *transId; // @dynamic transId;

@end

