//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class GetOpenIMKefuContactClientStatus, GetOpenIMKefuContactContext, NSData, NSString;

@class WXPBGeneratedMessage;

@interface GetOpenIMKefuContactReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GetOpenIMKefuContactClientStatus *clientStatus; // @dynamic clientStatus;
@property(retain, nonatomic) GetOpenIMKefuContactContext *context; // @dynamic context;
@property(retain, nonatomic) NSString *finderContext; // @dynamic finderContext;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *spamContext; // @dynamic spamContext;

@end

