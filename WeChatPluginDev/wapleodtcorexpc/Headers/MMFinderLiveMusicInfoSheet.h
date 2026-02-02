//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMusicDataItem, MMFinderLiveTaskId, MMUIImageView, MMUILabel, MMUIView, NSString, TingSharedAudioView;
@protocol MMFinderLiveMusicInfoSheetDelegate;

@interface MMFinderLiveMusicInfoSheet
{
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveMusicInfoSheetDelegate> _delegate;
    MMFinderLiveMusicDataItem *_dataItem;
    MMUILabel *_titleLabel;
    TingSharedAudioView *_audioContentView;
    MMUIView *_qqMusicTipsViewContainer;
    MMUIImageView *_qqMusicTipsLogoIcon;
    MMUIImageView *_qqMusicTipsArrowIcon;
    MMUILabel *_qqMusicTipsLabel;
}

+ (id)showWithTaskId:(id)arg1 dataItem:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *qqMusicTipsLabel; // @synthesize qqMusicTipsLabel=_qqMusicTipsLabel;
@property(retain, nonatomic) MMUIImageView *qqMusicTipsArrowIcon; // @synthesize qqMusicTipsArrowIcon=_qqMusicTipsArrowIcon;
@property(retain, nonatomic) MMUIImageView *qqMusicTipsLogoIcon; // @synthesize qqMusicTipsLogoIcon=_qqMusicTipsLogoIcon;
@property(retain, nonatomic) MMUIView *qqMusicTipsViewContainer; // @synthesize qqMusicTipsViewContainer=_qqMusicTipsViewContainer;
@property(retain, nonatomic) TingSharedAudioView *audioContentView; // @synthesize audioContentView=_audioContentView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveMusicDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <MMFinderLiveMusicInfoSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)tingItemForAudioContentView;
- (id)liveTask;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidAppear;
- (id)getBriefMusicInfo;
- (void)reloadMusicItem:(id)arg1;
- (void)reloadData;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onTapQQMusicTipsView;
- (void)onTapAudioContentView;
- (void)setupPageSheetConfig;
- (void)layoutQQMusicTipsViewContainer;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithTaskId:(id)arg1 dataItem:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

