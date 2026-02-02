//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface ExchangeEmotionPackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int isAutomatic; // @dynamic isAutomatic;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *seriesId; // @dynamic seriesId;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) SKBuiltinBuffer_t *token; // @dynamic token;

@end

