//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface SnsRedEnvelops : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int reportId; // @dynamic reportId;
@property(nonatomic) unsigned int reportKey; // @dynamic reportKey;
@property(nonatomic) unsigned int resourceId; // @dynamic resourceId;
@property(nonatomic) unsigned int rewardCount; // @dynamic rewardCount;
@property(retain, nonatomic) NSMutableArray *rewardUserList; // @dynamic rewardUserList;

@end

