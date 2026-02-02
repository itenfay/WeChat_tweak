//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoLikeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long likeId; // @dynamic likeId;
@property(retain, nonatomic) MegaVideoBaseRequest *megaBasereq; // @dynamic megaBasereq;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) NSString *videoNonceId; // @dynamic videoNonceId;
@property(nonatomic) unsigned long long videoObjectId; // @dynamic videoObjectId;

@end

