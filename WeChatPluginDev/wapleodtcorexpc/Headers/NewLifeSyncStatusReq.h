//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NewLifeFeedOperationSyncInfo, NewLifeFollowSyncInfo, NewLifeJumpSyncInfo;

@interface NewLifeSyncStatusReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NewLifeFeedOperationSyncInfo *feedOperationSyncInfo; // @dynamic feedOperationSyncInfo;
@property(retain, nonatomic) NewLifeFollowSyncInfo *followSyncInfo; // @dynamic followSyncInfo;
@property(retain, nonatomic) NewLifeJumpSyncInfo *jumpSyncInfo; // @dynamic jumpSyncInfo;
@property(nonatomic) unsigned int syncType; // @dynamic syncType;

@end

