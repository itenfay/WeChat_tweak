//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentVideoFloatBarInfo;

@interface WCCanvasComponentGeneralVideoInfo
{
    _Bool _forbiddenControlView;
    _Bool _hideVoiceIcon;
    _Bool _forbiddenAutoPlay;
    _Bool _forbiddenPreload;
    _Bool _forceLandscapeWhenTurnToFullScreen;
    _Bool _allowVoice;
    int _playerMode;
    int _displayType;
    NSString *_videoUrl;
    NSString *_thumbUrl;
    double _displayWidth;
    double _displayHeight;
    NSString *_videoMd5;
    WCCanvasComponentVideoFloatBarInfo *_floatBarInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowVoice; // @synthesize allowVoice=_allowVoice;
@property(retain, nonatomic) WCCanvasComponentVideoFloatBarInfo *floatBarInfo; // @synthesize floatBarInfo=_floatBarInfo;
@property(nonatomic) _Bool forceLandscapeWhenTurnToFullScreen; // @synthesize forceLandscapeWhenTurnToFullScreen=_forceLandscapeWhenTurnToFullScreen;
@property(nonatomic) _Bool forbiddenPreload; // @synthesize forbiddenPreload=_forbiddenPreload;
@property(nonatomic) _Bool forbiddenAutoPlay; // @synthesize forbiddenAutoPlay=_forbiddenAutoPlay;
@property(nonatomic) _Bool hideVoiceIcon; // @synthesize hideVoiceIcon=_hideVoiceIcon;
@property(nonatomic) _Bool forbiddenControlView; // @synthesize forbiddenControlView=_forbiddenControlView;
@property(retain, nonatomic) NSString *videoMd5; // @synthesize videoMd5=_videoMd5;
@property(nonatomic) double displayHeight; // @synthesize displayHeight=_displayHeight;
@property(nonatomic) double displayWidth; // @synthesize displayWidth=_displayWidth;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(nonatomic) int playerMode; // @synthesize playerMode=_playerMode;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

