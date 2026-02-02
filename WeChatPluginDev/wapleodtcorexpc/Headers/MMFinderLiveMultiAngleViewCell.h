//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class LiveSdkChannelParams, LiveSdkChannelParamsDesc, MMLiveCDNPlayerView, MMUIImageView, MMUILabel, MMUIView, NSString;

@interface MMFinderLiveMultiAngleViewCell : UICollectionViewCell
{
    _Bool _isSelect;
    _Bool _isCoverSpam;
    _Bool _useFillModeForLandscapeVideo;
    LiveSdkChannelParamsDesc *_channelParamsDesc;
    LiveSdkChannelParams *_channelParams;
    NSString *_coverUrl;
    NSString *_coverSpamText;
    double _itemHeight;
    MMUIImageView *_angleImageView;
    MMLiveCDNPlayerView *_playerView;
    MMUILabel *_titleLabel;
    MMUIView *_coverView;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) MMUIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) MMUIImageView *angleImageView; // @synthesize angleImageView=_angleImageView;
@property(nonatomic) _Bool useFillModeForLandscapeVideo; // @synthesize useFillModeForLandscapeVideo=_useFillModeForLandscapeVideo;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(retain, nonatomic) NSString *coverSpamText; // @synthesize coverSpamText=_coverSpamText;
@property(nonatomic) _Bool isCoverSpam; // @synthesize isCoverSpam=_isCoverSpam;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) LiveSdkChannelParams *channelParams; // @synthesize channelParams=_channelParams;
@property(retain, nonatomic) LiveSdkChannelParamsDesc *channelParamsDesc; // @synthesize channelParamsDesc=_channelParamsDesc;
- (void)updateRenderMode;
- (void)pause;
- (void)play;
- (void)layoutTitleView;
- (void)loadImage:(id)arg1;
- (id)getPlayerUrlFromChannelParamsDesc;
- (void)layoutPlayerView;
- (void)layoutAngleImageView;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)liveMultiAngleViewDisappearHandle;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

