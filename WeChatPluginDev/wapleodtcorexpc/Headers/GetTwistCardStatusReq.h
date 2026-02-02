//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetTwistCardStatusReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *canvasId; // @dynamic canvasId;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *giveCardId; // @dynamic giveCardId;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) NSString *pageId; // @dynamic pageId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

