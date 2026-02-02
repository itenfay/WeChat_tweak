//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderPromotionMsg_MiniappMsg, NSMutableArray;

@interface FinderPromotionMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(retain, nonatomic) FinderPromotionMsg_MiniappMsg *miniappMsg; // @dynamic miniappMsg;
@property(nonatomic) unsigned int msgAction; // @dynamic msgAction;
@property(nonatomic) unsigned int msgExt; // @dynamic msgExt;
@property(nonatomic) unsigned int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSMutableArray *pathInfos; // @dynamic pathInfos;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;

@end

