//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderSyncClientStatus_ReddotSession_ReddotInfo, NSMutableArray, NSString;

@interface FinderSyncClientStatus_ReddotSession : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSString *contextId; // @dynamic contextId;
@property(retain, nonatomic) FinderSyncClientStatus_ReddotSession_ReddotInfo *leftReddotInfo; // @dynamic leftReddotInfo;
@property(retain, nonatomic) NSMutableArray *leftReddotInfoList; // @dynamic leftReddotInfoList;
@property(nonatomic) unsigned int reportScene; // @dynamic reportScene;
@property(retain, nonatomic) FinderSyncClientStatus_ReddotSession_ReddotInfo *rightReddotInfo; // @dynamic rightReddotInfo;
@property(retain, nonatomic) NSMutableArray *rightReddotInfoList; // @dynamic rightReddotInfoList;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sessionInterval; // @dynamic sessionInterval;

@end

