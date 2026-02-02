//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface VoipCSSyncReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int notifySeq; // @dynamic notifySeq;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

