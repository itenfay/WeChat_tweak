//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSString;

@interface FinderLiveKtvPlayMember : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bestPlaySongName; // @dynamic bestPlaySongName;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @dynamic liveContact;
@property(nonatomic) unsigned int playAvgScores; // @dynamic playAvgScores;
@property(nonatomic) unsigned int playSize; // @dynamic playSize;

@end

