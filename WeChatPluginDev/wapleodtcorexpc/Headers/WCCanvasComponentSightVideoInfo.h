//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentVideoFloatBarInfo;

@interface WCCanvasComponentSightVideoInfo
{
    _Bool _useNewSightPlayer;
    _Bool _forbiddenControlView;
    _Bool _closePlayerStateCheckWhenSetThumbContentMode;
    _Bool _allowVoice;
    _Bool _forceLandscapeWhenTurnToFullScreen;
    int _displayType;
    int _canvasNoStore;
    NSString *_sightVideoUrl;
    NSString *_sightThumbUrl;
    double _sightDisplayWidth;
    double _sightDisplayHeight;
    NSString *_sightVideoMd5;
    WCCanvasComponentVideoFloatBarInfo *_floatBarInfo;
    NSString *_streamVideoUrl;
    NSString *_jumpText;
    NSString *_jumpTextColor;
    NSString *_separatorColor;
    NSString *_canvasId;
    NSString *_canvasExt;
}

- (void).cxx_destruct;
@property(nonatomic) int canvasNoStore; // @synthesize canvasNoStore=_canvasNoStore;
@property(retain, nonatomic) NSString *canvasExt; // @synthesize canvasExt=_canvasExt;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) NSString *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) NSString *jumpTextColor; // @synthesize jumpTextColor=_jumpTextColor;
@property(retain, nonatomic) NSString *jumpText; // @synthesize jumpText=_jumpText;
@property(retain, nonatomic) NSString *streamVideoUrl; // @synthesize streamVideoUrl=_streamVideoUrl;
@property(retain, nonatomic) WCCanvasComponentVideoFloatBarInfo *floatBarInfo; // @synthesize floatBarInfo=_floatBarInfo;
@property(nonatomic) _Bool forceLandscapeWhenTurnToFullScreen; // @synthesize forceLandscapeWhenTurnToFullScreen=_forceLandscapeWhenTurnToFullScreen;
@property(nonatomic) _Bool allowVoice; // @synthesize allowVoice=_allowVoice;
@property(nonatomic) _Bool closePlayerStateCheckWhenSetThumbContentMode; // @synthesize closePlayerStateCheckWhenSetThumbContentMode=_closePlayerStateCheckWhenSetThumbContentMode;
@property(nonatomic) _Bool forbiddenControlView; // @synthesize forbiddenControlView=_forbiddenControlView;
@property(nonatomic) _Bool useNewSightPlayer; // @synthesize useNewSightPlayer=_useNewSightPlayer;
@property(retain, nonatomic) NSString *sightVideoMd5; // @synthesize sightVideoMd5=_sightVideoMd5;
@property(nonatomic) double sightDisplayHeight; // @synthesize sightDisplayHeight=_sightDisplayHeight;
@property(nonatomic) double sightDisplayWidth; // @synthesize sightDisplayWidth=_sightDisplayWidth;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSString *sightThumbUrl; // @synthesize sightThumbUrl=_sightThumbUrl;
@property(retain, nonatomic) NSString *sightVideoUrl; // @synthesize sightVideoUrl=_sightVideoUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

