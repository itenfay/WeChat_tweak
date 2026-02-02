//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, VideoTemplate, WCFinderContact;

@interface WCFinderMJTempInfo : NSObject
{
    _Bool _forbidForward;
    WCFinderContact *_finderContact;
    long long _originCount;
    NSString *_coverUrl;
    NSString *_becomeCreatorUrl;
    VideoTemplate *_videoTemplate;
    NSString *_templateMusicId;
    NSString *_topicId;
}

+ (id)newWithTemplateListResponse:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *templateMusicId; // @synthesize templateMusicId=_templateMusicId;
@property(retain, nonatomic) VideoTemplate *videoTemplate; // @synthesize videoTemplate=_videoTemplate;
@property(nonatomic) _Bool forbidForward; // @synthesize forbidForward=_forbidForward;
@property(copy, nonatomic) NSString *becomeCreatorUrl; // @synthesize becomeCreatorUrl=_becomeCreatorUrl;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) long long originCount; // @synthesize originCount=_originCount;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
- (unsigned long long)templateType;
- (id)templateId;
- (id)tempTitle;
- (long long)usedCount;

@end

