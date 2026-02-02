//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderGetLiveSongListResp_SongInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int auditStatus; // @dynamic auditStatus;
@property(nonatomic) unsigned long long heatValue; // @dynamic heatValue;
@property(nonatomic) unsigned int memberAudienceRequestCount; // @dynamic memberAudienceRequestCount;
@property(nonatomic) unsigned int requestMemberCnt; // @dynamic requestMemberCnt;
@property(retain, nonatomic) NSMutableArray *requestMemberNames; // @dynamic requestMemberNames;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;

@end

