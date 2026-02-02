//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameWelfareJumpInfo, GameWelfareMediaInfo, NSMutableArray, NSString;

@interface GameWelfareInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long serverTs; // @dynamic serverTs;
@property(retain, nonatomic) NSString *welfareId; // @dynamic welfareId;
@property(retain, nonatomic) GameWelfareJumpInfo *welfareJumpInfo; // @dynamic welfareJumpInfo;
@property(retain, nonatomic) GameWelfareMediaInfo *welfareMediaInfo; // @dynamic welfareMediaInfo;
@property(nonatomic) unsigned int welfareStatus; // @dynamic welfareStatus;
@property(retain, nonatomic) NSMutableArray *welfareTaskList; // @dynamic welfareTaskList;
@property(nonatomic) unsigned int welfareType; // @dynamic welfareType;

@end

