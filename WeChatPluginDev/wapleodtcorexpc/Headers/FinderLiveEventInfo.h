//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray;

@class WXPBGeneratedMessage;

@interface FinderLiveEventInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int eventId; // @dynamic eventId;
@property(nonatomic) unsigned int eventStatus; // @dynamic eventStatus;
@property(nonatomic) unsigned int participantIdentity; // @dynamic participantIdentity;
@property(retain, nonatomic) NSMutableArray *relatedEvents; // @dynamic relatedEvents;
@property(nonatomic) unsigned int streamStatus; // @dynamic streamStatus;

@end

