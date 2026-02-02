//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, WCFinderMelodyView;

@interface WCFinderEditImageMusicView
{
    WCFinderMelodyView *_melodyImageView;
    UIImageView *_arrowImageView;
    UILabel *_chooseBGMTipsLabel;
    UILabel *_durationLabel;
    UILabel *_songInfoLabel;
}

+ (double)getImageMusicViewWidthWith:(id)arg1 useEduTips:(_Bool)arg2 screenSize:(struct CGSize)arg3 duration:(int)arg4 hiddenArrow:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *songInfoLabel; // @synthesize songInfoLabel=_songInfoLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *chooseBGMTipsLabel; // @synthesize chooseBGMTipsLabel=_chooseBGMTipsLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCFinderMelodyView *melodyImageView; // @synthesize melodyImageView=_melodyImageView;
- (void)updateContentViewWith:(id)arg1 useEduTips:(_Bool)arg2 screenSize:(struct CGSize)arg3 duration:(int)arg4 hiddenArrow:(_Bool)arg5;
- (void)initChooseBGMTipsLabel;
- (void)initArrowImageView;
- (void)initSongInfoLabel;
- (void)initMelodyImageView;
- (void)initDurationLabel;
- (void)setUpSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

