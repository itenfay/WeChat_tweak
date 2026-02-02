//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest;

@interface DownloadVideoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(nonatomic) unsigned int mxPackSize; // @dynamic mxPackSize;
@property(nonatomic) unsigned int networkEnv; // @dynamic networkEnv;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;

@end

