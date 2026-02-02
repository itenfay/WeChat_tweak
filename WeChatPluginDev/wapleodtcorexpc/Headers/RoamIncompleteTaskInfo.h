//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RoamIncompleteTaskInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(nonatomic) _Bool hasIncompleteTask; // @dynamic hasIncompleteTask;
@property(nonatomic) _Bool isUnintended; // @dynamic isUnintended;
@property(nonatomic) int lastState; // @dynamic lastState;
@property(nonatomic) unsigned long long totalSize; // @dynamic totalSize;
@property(nonatomic) unsigned long long transferredDataSize; // @dynamic transferredDataSize;

@end

