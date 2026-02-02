//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderMemberSearchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authorNickname; // @dynamic authorNickname;
@property(nonatomic) unsigned int authorType; // @dynamic authorType;
@property(retain, nonatomic) NSString *authorUrl; // @dynamic authorUrl;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) unsigned long long postTime; // @dynamic postTime;
@property(nonatomic) unsigned int replyNum; // @dynamic replyNum;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

