//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGloryTopItemView, MMFinderLiveSharePubbleTipView, MMLiveTaskId, MMUIImageView, MMUILabel, MMUIView, NSString;
@protocol MMFinderLiveGloryTopViewDelegate;

@interface MMFinderLiveGloryTopView
{
    id <MMFinderLiveGloryTopViewDelegate> _delegate;
    MMLiveTaskId *_taskId;
    MMUIImageView *_backgroundView;
    MMUILabel *_titleView;
    MMUIView *_seperatorLine;
    MMUILabel *_titleTipsView;
    MMFinderLiveGloryTopItemView *_top1UserView;
    MMFinderLiveGloryTopItemView *_top2UserView;
    MMFinderLiveGloryTopItemView *_top3UserView;
    MMFinderLiveSharePubbleTipView *_tipsPubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSharePubbleTipView *tipsPubbleView; // @synthesize tipsPubbleView=_tipsPubbleView;
@property(retain, nonatomic) MMFinderLiveGloryTopItemView *top3UserView; // @synthesize top3UserView=_top3UserView;
@property(retain, nonatomic) MMFinderLiveGloryTopItemView *top2UserView; // @synthesize top2UserView=_top2UserView;
@property(retain, nonatomic) MMFinderLiveGloryTopItemView *top1UserView; // @synthesize top1UserView=_top1UserView;
@property(retain, nonatomic) MMUILabel *titleTipsView; // @synthesize titleTipsView=_titleTipsView;
@property(retain, nonatomic) MMUIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGloryTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)audienceLogReporter;
- (void)hidePubbleTipsView;
- (void)showTipsOn:(id)arg1;
- (void)onTappedTopViewWithContact:(id)arg1;
- (_Bool)alwaysDark;
- (id)liveTask;
- (void)updateWithContacts:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

