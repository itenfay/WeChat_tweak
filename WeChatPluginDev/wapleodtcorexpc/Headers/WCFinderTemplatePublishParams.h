//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedVideoFetcher, WCFinderPostSourceInfo;

@interface WCFinderTemplatePublishParams : NSObject
{
    _Bool _showPostVideoToCommentAreaSwitch;
    _Bool _disableShowNoTmpl;
    _Bool _disableShowMoreTmpl;
    _Bool _disableShowFromAlbum;
    unsigned long long _eventId;
    NSString *_followFeedId;
    unsigned long long _enterScene;
    NSString *_topicId;
    NSString *_followFeedTemplateId;
    WCFinderPostSourceInfo *_sourceInfo;
    NSString *_topicContent;
    WCFinderFeedVideoFetcher *_videoFetcher;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableShowFromAlbum; // @synthesize disableShowFromAlbum=_disableShowFromAlbum;
@property(nonatomic) _Bool disableShowMoreTmpl; // @synthesize disableShowMoreTmpl=_disableShowMoreTmpl;
@property(nonatomic) _Bool disableShowNoTmpl; // @synthesize disableShowNoTmpl=_disableShowNoTmpl;
@property(retain, nonatomic) WCFinderFeedVideoFetcher *videoFetcher; // @synthesize videoFetcher=_videoFetcher;
@property(copy, nonatomic) NSString *topicContent; // @synthesize topicContent=_topicContent;
@property(retain, nonatomic) WCFinderPostSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) _Bool showPostVideoToCommentAreaSwitch; // @synthesize showPostVideoToCommentAreaSwitch=_showPostVideoToCommentAreaSwitch;
@property(copy, nonatomic) NSString *followFeedTemplateId; // @synthesize followFeedTemplateId=_followFeedTemplateId;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(copy, nonatomic) NSString *followFeedId; // @synthesize followFeedId=_followFeedId;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
- (id)init;

@end

