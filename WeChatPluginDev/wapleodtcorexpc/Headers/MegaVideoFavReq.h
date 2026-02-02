//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoFavReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long favId; // @dynamic favId;
@property(retain, nonatomic) MegaVideoBaseRequest *megaBasereq; // @dynamic megaBasereq;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) NSString *videoNonceId; // @dynamic videoNonceId;
@property(nonatomic) unsigned long long videoObjectId; // @dynamic videoObjectId;

@end

