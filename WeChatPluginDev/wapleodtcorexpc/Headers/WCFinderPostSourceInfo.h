//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostSourceInfo : NSObject
{
    int _sourceFeedCommentScene;
    NSString *_sourceFeedId;
    NSString *_sourceFeedSessionBuffer;
    NSString *_sourceSongId;
    NSString *_sourceAudioId;
    unsigned long long _musicSourcePosition;
    NSString *_sourceEventId;
    NSString *_sourceTopicName;
    NSString *_sourceTemplateId;
    unsigned long long _sourceTemplateType;
}

+ (void)initialize;
+ (void)PBArrayAdd_sourceFeedCommentScene;
+ (void)PBArrayAdd_musicSourcePosition;
+ (void)PBArrayAdd_sourceSongId;
+ (void)PBArrayAdd_sourceFeedSessionBuffer;
+ (void)PBArrayAdd_sourceFeedId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sourceTemplateType; // @synthesize sourceTemplateType=_sourceTemplateType;
@property(copy, nonatomic) NSString *sourceTemplateId; // @synthesize sourceTemplateId=_sourceTemplateId;
@property(copy, nonatomic) NSString *sourceTopicName; // @synthesize sourceTopicName=_sourceTopicName;
@property(copy, nonatomic) NSString *sourceEventId; // @synthesize sourceEventId=_sourceEventId;
@property(nonatomic) unsigned long long musicSourcePosition; // @synthesize musicSourcePosition=_musicSourcePosition;
@property(copy, nonatomic) NSString *sourceAudioId; // @synthesize sourceAudioId=_sourceAudioId;
@property(copy, nonatomic) NSString *sourceSongId; // @synthesize sourceSongId=_sourceSongId;
@property(nonatomic) int sourceFeedCommentScene; // @synthesize sourceFeedCommentScene=_sourceFeedCommentScene;
@property(copy, nonatomic) NSString *sourceFeedSessionBuffer; // @synthesize sourceFeedSessionBuffer=_sourceFeedSessionBuffer;
@property(copy, nonatomic) NSString *sourceFeedId; // @synthesize sourceFeedId=_sourceFeedId;
@property(readonly, copy) NSString *description;
- (_Bool)isEmpty;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

