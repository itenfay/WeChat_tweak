//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderShareExposeReportModel : NSObject
{
    unsigned long long _entersession;
    double _event_time;
    unsigned long long _cardType;
    unsigned long long _sourceCommentScene;
    NSString *_sourceusr;
    NSString *_feedid;
    NSString *_eventId;
    NSString *_shareUsername;
}

+ (void)msgContentVCExpose;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shareUsername; // @synthesize shareUsername=_shareUsername;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
@property(copy, nonatomic) NSString *sourceusr; // @synthesize sourceusr=_sourceusr;
@property(nonatomic) unsigned long long sourceCommentScene; // @synthesize sourceCommentScene=_sourceCommentScene;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) double event_time; // @synthesize event_time=_event_time;
@property(nonatomic) unsigned long long entersession; // @synthesize entersession=_entersession;
- (void)log;

@end

