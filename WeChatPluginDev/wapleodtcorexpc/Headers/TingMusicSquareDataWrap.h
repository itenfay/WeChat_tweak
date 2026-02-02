//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscoverResponse, TingReddotReportInfo;

@interface TingMusicSquareDataWrap : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long cahceTimeStamp; // @dynamic cahceTimeStamp;
@property(nonatomic) _Bool isMergeRequest; // @dynamic isMergeRequest;
@property(nonatomic) _Bool isOnlineData; // @dynamic isOnlineData;
@property(retain, nonatomic) TingReddotReportInfo *redDotReportInfo; // @dynamic redDotReportInfo;
@property(nonatomic) unsigned int reqSeq; // @dynamic reqSeq;
@property(retain, nonatomic) MMListenDiscoverResponse *response; // @dynamic response;

@end

