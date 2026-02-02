//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ActivityStage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int beginTime; // @dynamic beginTime;
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(retain, nonatomic) NSMutableArray *stageBoardInfo; // @dynamic stageBoardInfo;
@property(retain, nonatomic) NSString *stageId; // @dynamic stageId;
@property(retain, nonatomic) NSString *stageName; // @dynamic stageName;

@end

