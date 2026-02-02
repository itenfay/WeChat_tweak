//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WARemoteDebug_BaseReq;

@interface WARemoteDebug_WxSyncMessageReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseReq *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int maxSeq; // @dynamic maxSeq;
@property(nonatomic) unsigned int minSeq; // @dynamic minSeq;

@end

