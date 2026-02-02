//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenRecommendInfo, NSData, NSString, TingMusicSquarePreloadInfo_SourceInfo, TingReddotReportInfo;

@interface TingMusicSquarePreloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *bytePassBuffer; // @dynamic bytePassBuffer;
@property(retain, nonatomic) NSData *musicGlobalContextBuffer; // @dynamic musicGlobalContextBuffer;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(retain, nonatomic) NSData *reddotClientBuffer; // @dynamic reddotClientBuffer;
@property(retain, nonatomic) TingReddotReportInfo *reportInfo; // @dynamic reportInfo;
@property(retain, nonatomic) TingMusicSquarePreloadInfo_SourceInfo *sourceInfo; // @dynamic sourceInfo;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

