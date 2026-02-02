//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface SnsObjectOpChangeVisibility : WXPBGeneratedMessage
{
    int blackContactTagIdListMemoizedSerializedSize;
    int groupContactTagIdListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blackContactTagIdList; // @dynamic blackContactTagIdList;
@property(nonatomic) unsigned int blackContactTagIdListCount; // @dynamic blackContactTagIdListCount;
@property(retain, nonatomic) NSMutableArray *blackList; // @dynamic blackList;
@property(nonatomic) unsigned int blackListCount; // @dynamic blackListCount;
@property(retain, nonatomic) NSMutableArray *groupContactTagIdList; // @dynamic groupContactTagIdList;
@property(nonatomic) unsigned int groupContactTagIdListCount; // @dynamic groupContactTagIdListCount;
@property(retain, nonatomic) NSMutableArray *groupUser; // @dynamic groupUser;
@property(nonatomic) unsigned int groupUserCount; // @dynamic groupUserCount;
@property(nonatomic) unsigned int opType; // @dynamic opType;

@end

