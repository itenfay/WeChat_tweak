//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentButtonInfo, WCCanvasComponentTextAreaInfo, WCCanvasComponentVideoFloatBarInfo;

@interface WCCanvasComponentStreamVideoInfo
{
    _Bool _useNewStreamPlayer;
    _Bool _forbiddenLoopPlay;
    _Bool _alwaysAutoPlay;
    _Bool _allowVoice;
    _Bool _forceLandscapeWhenTurnToFullScreen;
    int _displayType;
    NSString *_streamVideoUrl;
    NSString *_streamVideoMd5;
    NSString *_previewImageUrl;
    WCCanvasComponentTextAreaInfo *_textOnVideo;
    WCCanvasComponentButtonInfo *_buttonOnVideo;
    double _streamDisplayWidth;
    double _streamDisplayHeight;
    WCCanvasComponentVideoFloatBarInfo *_floatBarInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentVideoFloatBarInfo *floatBarInfo; // @synthesize floatBarInfo=_floatBarInfo;
@property(nonatomic) _Bool forceLandscapeWhenTurnToFullScreen; // @synthesize forceLandscapeWhenTurnToFullScreen=_forceLandscapeWhenTurnToFullScreen;
@property(nonatomic) _Bool allowVoice; // @synthesize allowVoice=_allowVoice;
@property(nonatomic) _Bool alwaysAutoPlay; // @synthesize alwaysAutoPlay=_alwaysAutoPlay;
@property(nonatomic) _Bool forbiddenLoopPlay; // @synthesize forbiddenLoopPlay=_forbiddenLoopPlay;
@property(nonatomic) _Bool useNewStreamPlayer; // @synthesize useNewStreamPlayer=_useNewStreamPlayer;
@property(nonatomic) double streamDisplayHeight; // @synthesize streamDisplayHeight=_streamDisplayHeight;
@property(nonatomic) double streamDisplayWidth; // @synthesize streamDisplayWidth=_streamDisplayWidth;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) WCCanvasComponentButtonInfo *buttonOnVideo; // @synthesize buttonOnVideo=_buttonOnVideo;
@property(retain, nonatomic) WCCanvasComponentTextAreaInfo *textOnVideo; // @synthesize textOnVideo=_textOnVideo;
@property(retain, nonatomic) NSString *previewImageUrl; // @synthesize previewImageUrl=_previewImageUrl;
@property(retain, nonatomic) NSString *streamVideoMd5; // @synthesize streamVideoMd5=_streamVideoMd5;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl=_streamVideoUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

