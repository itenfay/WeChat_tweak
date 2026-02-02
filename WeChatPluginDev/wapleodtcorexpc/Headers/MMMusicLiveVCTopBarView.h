//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicLiveVCTopBarMusicSourceButton, MMUIButton, MMUILabel, MusicAudioTypeButton, MusicLiveGetSongStatusResp_MusicianInfo, MusicSourceViewInfo, UIImageView, WCLiveBlurButton;
@protocol MMMusicLiveVCTopBarViewDelegate;

@interface MMMusicLiveVCTopBarView : UIView
{
    id <MMMusicLiveVCTopBarViewDelegate> _delegate;
    UIImageView *_backView;
    WCLiveBlurButton *_closeButton;
    MMUILabel *_titleView;
    MMUIButton *_musicianView;
    MMMusicLiveVCTopBarMusicSourceButton *_musicSourceButton;
    MusicAudioTypeButton *_audioTypeButton;
    MusicSourceViewInfo *_musicSourceViewInfo;
    MusicLiveGetSongStatusResp_MusicianInfo *_musician;
    double _titleMaxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double titleMaxWidth; // @synthesize titleMaxWidth=_titleMaxWidth;
@property(retain, nonatomic) MusicLiveGetSongStatusResp_MusicianInfo *musician; // @synthesize musician=_musician;
@property(retain, nonatomic) MusicSourceViewInfo *musicSourceViewInfo; // @synthesize musicSourceViewInfo=_musicSourceViewInfo;
@property(retain, nonatomic) MusicAudioTypeButton *audioTypeButton; // @synthesize audioTypeButton=_audioTypeButton;
@property(retain, nonatomic) MMMusicLiveVCTopBarMusicSourceButton *musicSourceButton; // @synthesize musicSourceButton=_musicSourceButton;
@property(retain, nonatomic) MMUIButton *musicianView; // @synthesize musicianView=_musicianView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <MMMusicLiveVCTopBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickMusician;
- (void)onClickCloseBtn;
- (void)onSourceViewBtnClicked:(id)arg1;
- (void)onClickAudioTypeButton;
- (void)setTitleText:(id)arg1 singer:(id)arg2;
- (void)layoutSubviewsIfClear:(_Bool)arg1;
- (void)customLayout;
- (_Bool)canJumpMusician;
- (void)layoutSubviews;
- (void)setupSourceViewInfo;
- (void)reloadData;
- (id)appNameFromDelegate;
- (id)iconImageFromDelegate;
- (id)initWithDelegate:(id)arg1;

@end

