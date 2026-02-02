//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAAnimation, CADisplayLink, CALayer, NSMutableDictionary, NSString, UIColor, UIImage;

@interface ImageStyle
{
    UIImage *_oImage;
    _Bool _alwaysTemplate;
    _Bool _customImageProvider;
    _Bool _playing;
    _Bool _didCropImg;
    NSString *_imageName;
    NSString *_imageURL;
    NSString *_darkImageURL;
    UIColor *_color;
    NSString *_animationFilePath;
    CAAnimation *_animation;
    CALayer *_animationLayer;
    NSString *_nsImgSrc;
    double _paddingHorizontal;
    double _topMargin;
    double _cornerRadius;
    CDUnknownBlockType _imageLoadHandler;
    double _timeOffset;
    CDUnknownBlockType _startHandler;
    CDUnknownBlockType _endHandler;
    CADisplayLink *_displayLink;
    NSMutableDictionary *_networkResultTempData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *networkResultTempData; // @synthesize networkResultTempData=_networkResultTempData;
@property(nonatomic) _Bool didCropImg; // @synthesize didCropImg=_didCropImg;
@property(getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType endHandler; // @synthesize endHandler=_endHandler;
@property(copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(copy, nonatomic) CDUnknownBlockType imageLoadHandler; // @synthesize imageLoadHandler=_imageLoadHandler;
@property(nonatomic) _Bool customImageProvider; // @synthesize customImageProvider=_customImageProvider;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double paddingHorizontal; // @synthesize paddingHorizontal=_paddingHorizontal;
@property(copy, nonatomic) NSString *nsImgSrc; // @synthesize nsImgSrc=_nsImgSrc;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSString *animationFilePath; // @synthesize animationFilePath=_animationFilePath;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *darkImageURL; // @synthesize darkImageURL=_darkImageURL;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImage *oImage; // @synthesize oImage=_oImage;
- (void)tick;
- (void)stopPlayAnimateEmoji;
- (void)playAnimateEmojiWithStartHandler:(CDUnknownBlockType)arg1 endHandler:(CDUnknownBlockType)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)checkLoadImageFinish;
- (void)asyncLoadWebImageWithCompletionHandler:(CDUnknownBlockType)arg1 provider:(id)arg2;
- (_Bool)needAsyncLoadWebImage;
- (void)tryLoadImageURLCache;
- (void)setImageURL:(id)arg1 darkImageURL:(id)arg2;
- (void)updateImage;
@property(nonatomic) _Bool alwaysTemplate; // @synthesize alwaysTemplate=_alwaysTemplate;
- (void)drawInContext:(struct CGContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

