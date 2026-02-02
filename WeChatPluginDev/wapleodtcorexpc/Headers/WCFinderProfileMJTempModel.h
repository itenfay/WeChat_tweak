//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderTopicInfo, NSString, VideoTemplate;

@interface WCFinderProfileMJTempModel : NSObject
{
    unsigned long long _topicId;
    NSString *_title;
    NSString *_desc;
    NSString *_coverUrl;
    FinderTopicInfo *_topic;
    VideoTemplate *_videoTemp;
    struct CGSize _coverSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VideoTemplate *videoTemp; // @synthesize videoTemp=_videoTemp;
@property(retain, nonatomic) FinderTopicInfo *topic; // @synthesize topic=_topic;
@property(nonatomic) struct CGSize coverSize; // @synthesize coverSize=_coverSize;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(readonly, nonatomic) NSString *templateId;
@property(readonly, nonatomic) NSString *topicIdStr;
- (id)initWithTopic:(id)arg1;

@end

