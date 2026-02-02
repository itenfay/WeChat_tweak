//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveSEIKTVState, NSMutableArray, NSString;

@interface LiveKTVSEIData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *actSessionId; // @dynamic actSessionId;
@property(retain, nonatomic) NSString *actUniqueId; // @dynamic actUniqueId;
@property(retain, nonatomic) NSString *actUserId; // @dynamic actUserId;
@property(nonatomic) unsigned int ktvActionVersion; // @dynamic ktvActionVersion;
@property(retain, nonatomic) NSMutableArray *ktvInfoList; // @dynamic ktvInfoList;
@property(nonatomic) int ktvScoreEngineFlag; // @dynamic ktvScoreEngineFlag;
@property(retain, nonatomic) LiveSEIKTVState *ktvState; // @dynamic ktvState;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

