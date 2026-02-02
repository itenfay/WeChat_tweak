//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveEventInfo : NSObject
{
    unsigned int _eventId;
    unsigned int _participantIdentity;
    unsigned int _eventStatus;
    unsigned int _streamStatus;
    NSString *_eventToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) unsigned int streamStatus; // @synthesize streamStatus=_streamStatus;
@property(nonatomic) unsigned int eventStatus; // @synthesize eventStatus=_eventStatus;
@property(nonatomic) unsigned int participantIdentity; // @synthesize participantIdentity=_participantIdentity;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
- (id)genFinderEventInfo;
- (void)updateWithFinderLiveAudienceEventInfo:(id)arg1;
- (void)updateWithFinderLiveEventInfo:(id)arg1;

@end

