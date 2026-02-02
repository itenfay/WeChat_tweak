//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderClubInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *chatroomdId; // @dynamic chatroomdId;
@property(nonatomic) unsigned int clubRole; // @dynamic clubRole;
@property(retain, nonatomic) FinderJumpInfo *freezeJumpInfo; // @dynamic freezeJumpInfo;
@property(retain, nonatomic) NSString *groupName; // @dynamic groupName;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;

@end

