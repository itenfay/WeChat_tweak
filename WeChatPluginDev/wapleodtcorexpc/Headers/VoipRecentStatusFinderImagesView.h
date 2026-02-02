//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EditVideoBGMPlayer, NSArray, NSMutableArray, NSString, RecommendedMusicInfo, UIImageView, VoipRecentStatusImagesView, WCFinderDataItem;

@interface VoipRecentStatusFinderImagesView : UIView
{
    _Bool _shouldPlaySound;
    _Bool _shouldHideSoundBtn;
    _Bool _isVisable;
    CDUnknownBlockType _didClickSoundButtonCallback;
    CDUnknownBlockType _didSlideImagesCallback;
    WCFinderDataItem *_wcFinderDataItem;
    RecommendedMusicInfo *_musicInfo;
    NSArray *_mediaInfos;
    EditVideoBGMPlayer *_bgmPlayer;
    VoipRecentStatusImagesView *_imagesView;
    NSMutableArray *_dotViews;
    UIView *_soundView;
    UIImageView *_soundIconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *soundIconImageView; // @synthesize soundIconImageView=_soundIconImageView;
@property(retain, nonatomic) UIView *soundView; // @synthesize soundView=_soundView;
@property(retain, nonatomic) NSMutableArray *dotViews; // @synthesize dotViews=_dotViews;
@property(retain, nonatomic) VoipRecentStatusImagesView *imagesView; // @synthesize imagesView=_imagesView;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) NSArray *mediaInfos; // @synthesize mediaInfos=_mediaInfos;
@property(retain, nonatomic) RecommendedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) WCFinderDataItem *wcFinderDataItem; // @synthesize wcFinderDataItem=_wcFinderDataItem;
@property(copy, nonatomic) CDUnknownBlockType didSlideImagesCallback; // @synthesize didSlideImagesCallback=_didSlideImagesCallback;
@property(copy, nonatomic) CDUnknownBlockType didClickSoundButtonCallback; // @synthesize didClickSoundButtonCallback=_didClickSoundButtonCallback;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable=_isVisable;
@property(nonatomic) _Bool isSoundBtnHidden; // @synthesize isSoundBtnHidden=_shouldHideSoundBtn;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
- (void)onTerminate;
- (void)onSilenceViewClickWithSender:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWCFinderDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

