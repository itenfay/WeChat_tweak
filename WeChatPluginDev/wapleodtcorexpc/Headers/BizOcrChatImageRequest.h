//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface BizOcrChatImageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *cdnImgs; // @dynamic cdnImgs;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

