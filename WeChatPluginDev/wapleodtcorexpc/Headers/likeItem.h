//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SportRecord;

@interface likeItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int likecount; // @dynamic likecount;
@property(nonatomic) unsigned int likestate; // @dynamic likestate;
@property(nonatomic) unsigned int ranknum; // @dynamic ranknum;
@property(nonatomic) unsigned int score; // @dynamic score;
@property(retain, nonatomic) SportRecord *sportrecord; // @dynamic sportrecord;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

