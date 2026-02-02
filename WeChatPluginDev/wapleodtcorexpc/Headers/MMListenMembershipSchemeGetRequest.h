//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenItem, NSString;

@interface MMListenMembershipSchemeGetRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool allowCache; // @dynamic allowCache;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) MMListenItem *listenCtx; // @dynamic listenCtx;
@property(retain, nonatomic) NSString *musicAppid; // @dynamic musicAppid;
@property(nonatomic) int requestScene; // @dynamic requestScene;

@end

