//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSString, PAGView, WCAdFireworkCheerInfo, WCAdSocialLikeLogic, WCAdURLImageView, WCDataItem;

@interface WCAdFireworkCheerLikeAreaView
{
    _Bool _contentShowFlag;
    WCDataItem *_dataItem;
    WCAdFireworkCheerInfo *_fireworkCheerInfo;
    unsigned long long _contentItemScene;
    WCAdURLImageView *_backgroundImageView;
    PAGView *_topPagView;
    MMUIView *_topContentView;
}

+ (double)topAreaHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool contentShowFlag; // @synthesize contentShowFlag=_contentShowFlag;
@property(retain, nonatomic) MMUIView *topContentView; // @synthesize topContentView=_topContentView;
@property(retain, nonatomic) PAGView *topPagView; // @synthesize topPagView=_topPagView;
@property(retain, nonatomic) WCAdURLImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCAdFireworkCheerInfo *fireworkCheerInfo; // @synthesize fireworkCheerInfo=_fireworkCheerInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onMainMediaPlayStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isPlaying:(_Bool)arg3;
- (void)onFireworkCheerCommentAnimationStarted:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)realStopTopPag;
- (void)tryToStopTopPag;
- (void)tryToPlayTopPag;
@property(readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
- (void)startShowContentAnimation;
- (void)showContent;
- (double)topContentViewOriginY;
- (void)initTopContentView;
- (void)initTopPagView;
- (void)initBackgroundImageView;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 fireworkCheerInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

