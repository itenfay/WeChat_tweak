//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentMusicItem
{
    _Bool _isDarkColor;
    NSString *_voiceUrl;
    NSString *_coverUrl;
    NSString *_bgColor;
    double _bgColorAlpha;
    NSString *_title;
    NSString *_subTitle;
    double _musicDuration;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double musicDuration; // @synthesize musicDuration=_musicDuration;
@property(nonatomic) _Bool isDarkColor; // @synthesize isDarkColor=_isDarkColor;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

