//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveVotingConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *choiceList; // @dynamic choiceList;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(retain, nonatomic) NSString *question; // @dynamic question;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *votingId; // @dynamic votingId;

@end

