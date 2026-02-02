//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoBGMSelectedMusicInfo, NSMutableArray, NSString, WCLocationInfo;

@interface WCStoryPublishReportObj : NSObject
{
    _Bool _isClickSearchMusic;
    _Bool _isPublishToTimeLine;
    _Bool _isShowLyric;
    _Bool _isAddTextIntro;
    _Bool _hasRecordVideo;
    _Bool _hasEnterAllbum;
    unsigned int _emoticonWidgetCount;
    unsigned int _textWidgetCount;
    unsigned int _publishVideoType;
    unsigned int _photoCount;
    unsigned int _addTextIntroWordCount;
    unsigned int _addEmojToTextIntroCount;
    unsigned int _videoCompoundTime;
    unsigned int _isPortrailVideo;
    NSString *_publishEventId;
    unsigned long long _enterScene;
    unsigned long long _enterTime;
    unsigned long long _startEditTime;
    unsigned long long _videoDuration;
    unsigned long long _videoSource;
    WCLocationInfo *_locationInfo;
    NSMutableArray *_actionTraceArray;
    EditVideoBGMSelectedMusicInfo *_musicInfo;
    NSString *_photoLengthWidthSacles;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEnterAllbum; // @synthesize hasEnterAllbum=_hasEnterAllbum;
@property(nonatomic) _Bool hasRecordVideo; // @synthesize hasRecordVideo=_hasRecordVideo;
@property(nonatomic) unsigned int isPortrailVideo; // @synthesize isPortrailVideo=_isPortrailVideo;
@property(nonatomic) unsigned int videoCompoundTime; // @synthesize videoCompoundTime=_videoCompoundTime;
@property(copy, nonatomic) NSString *photoLengthWidthSacles; // @synthesize photoLengthWidthSacles=_photoLengthWidthSacles;
@property(nonatomic) unsigned int addEmojToTextIntroCount; // @synthesize addEmojToTextIntroCount=_addEmojToTextIntroCount;
@property(nonatomic) unsigned int addTextIntroWordCount; // @synthesize addTextIntroWordCount=_addTextIntroWordCount;
@property(nonatomic) _Bool isAddTextIntro; // @synthesize isAddTextIntro=_isAddTextIntro;
@property(nonatomic) _Bool isShowLyric; // @synthesize isShowLyric=_isShowLyric;
@property(nonatomic) unsigned int photoCount; // @synthesize photoCount=_photoCount;
@property(nonatomic) unsigned int publishVideoType; // @synthesize publishVideoType=_publishVideoType;
@property(nonatomic) _Bool isPublishToTimeLine; // @synthesize isPublishToTimeLine=_isPublishToTimeLine;
@property(nonatomic) _Bool isClickSearchMusic; // @synthesize isClickSearchMusic=_isClickSearchMusic;
@property(retain, nonatomic) EditVideoBGMSelectedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) NSMutableArray *actionTraceArray; // @synthesize actionTraceArray=_actionTraceArray;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(nonatomic) unsigned int textWidgetCount; // @synthesize textWidgetCount=_textWidgetCount;
@property(nonatomic) unsigned int emoticonWidgetCount; // @synthesize emoticonWidgetCount=_emoticonWidgetCount;
@property(nonatomic) unsigned long long videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned long long startEditTime; // @synthesize startEditTime=_startEditTime;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) NSString *publishEventId; // @synthesize publishEventId=_publishEventId;
- (unsigned long long)saveVideoCount;
- (id)arrayToJSON:(id)arg1;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (void)reportQuitPublish;
- (void)reportDoPublish;
- (id)realPoiInfoStr;
- (void)enterWithScene:(unsigned long long)arg1;

@end

