//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLivePromoteMsgInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)promoteID;
@property(nonatomic) _Bool isBeforeJoinLive;

// Remaining properties
@property(retain, nonatomic) NSData *businessExtBuffer; // @dynamic businessExtBuffer;
@property(nonatomic) unsigned int cancel; // @dynamic cancel;
@property(nonatomic) unsigned int delayShowTime; // @dynamic delayShowTime;
@property(retain, nonatomic) NSData *extBuffer; // @dynamic extBuffer;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) NSString *jumpId; // @dynamic jumpId;
@property(nonatomic) _Bool needGetJumpInfo; // @dynamic needGetJumpInfo;
@property(retain, nonatomic) NSData *promoteInfoBuffer; // @dynamic promoteInfoBuffer;
@property(retain, nonatomic) NSData *reportExtBuffer; // @dynamic reportExtBuffer;
@property(nonatomic) _Bool showAfterSyncextrainfo; // @dynamic showAfterSyncextrainfo;
@property(nonatomic) unsigned int showFixedIcon; // @dynamic showFixedIcon;
@property(nonatomic) unsigned int showTotalTime; // @dynamic showTotalTime;
@property(retain, nonatomic) NSString *subId; // @dynamic subId;
@property(nonatomic) unsigned int syncextrainfoRequestCmdid; // @dynamic syncextrainfoRequestCmdid;
@property(nonatomic) unsigned int syncextrainfoRequestIntervalSec; // @dynamic syncextrainfoRequestIntervalSec;
@property(nonatomic) _Bool syncextrainfoRequestRandom; // @dynamic syncextrainfoRequestRandom;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

