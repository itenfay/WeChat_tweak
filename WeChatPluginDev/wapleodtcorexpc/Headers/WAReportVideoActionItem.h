//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportVideoActionItem
{
    unsigned int _isFullScreen;
    unsigned int _eventId;
    unsigned int _clientTimestamp;
    unsigned int _publiclibversion;
    NSString *_eventNote;
    NSString *_videoTitle;
    NSString *_videoUrl;
    NSString *_eventNote1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *eventNote1; // @synthesize eventNote1=_eventNote1;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(nonatomic) unsigned int publiclibversion; // @synthesize publiclibversion=_publiclibversion;
@property(nonatomic) unsigned int clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property(retain, nonatomic) NSString *eventNote; // @synthesize eventNote=_eventNote;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;
@property(nonatomic) unsigned int isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (id)reportString;
- (int)reportID;

@end

