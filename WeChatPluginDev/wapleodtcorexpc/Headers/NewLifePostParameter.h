//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventInfo, FinderLocation, NSString, NewLifeRedDotTipsShowInfo;
@protocol NewLifePostEndDelegate;

@interface NewLifePostParameter : NSObject
{
    _Bool _selectDefaultEnvelope;
    int _enterScene;
    FinderEventInfo *_event;
    NSString *_topic;
    FinderLocation *_location;
    NSString *_topicId;
    id <NewLifePostEndDelegate> _postEndDelegate;
    NewLifeRedDotTipsShowInfo *_profilePostRedDotInfo;
    unsigned long long _initSelectTabIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long initSelectTabIndex; // @synthesize initSelectTabIndex=_initSelectTabIndex;
@property(retain, nonatomic) NewLifeRedDotTipsShowInfo *profilePostRedDotInfo; // @synthesize profilePostRedDotInfo=_profilePostRedDotInfo;
@property(retain, nonatomic) id <NewLifePostEndDelegate> postEndDelegate; // @synthesize postEndDelegate=_postEndDelegate;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) _Bool selectDefaultEnvelope; // @synthesize selectDefaultEnvelope=_selectDefaultEnvelope;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) FinderEventInfo *event; // @synthesize event=_event;
- (id)generateTopicContent;

@end

