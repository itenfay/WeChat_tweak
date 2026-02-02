//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NewLifeLocalTabTipsInfo, NewLifeStreamRequest;

@interface FlowLoadDataRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long cgiRequestId; // @dynamic cgiRequestId;
@property(nonatomic) unsigned int firstRequest; // @dynamic firstRequest;
@property(retain, nonatomic) NewLifeLocalTabTipsInfo *localTabTipsInfo; // @dynamic localTabTipsInfo;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(retain, nonatomic) NewLifeStreamRequest *streamRequest; // @dynamic streamRequest;

@end

