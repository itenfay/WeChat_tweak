//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, PAGView;

@interface MMFinderLiveSongLivingManageTableViewCell
{
    _Bool _isPreparedToSing;
    PAGView *_playingAnimationView;
    MMUILabel *_rankLabel;
    MMUILabel *_requestMemDescLabel;
    MMUILabel *_heartValueLabel;
    MMUIButton *_finishButton;
    MMUIButton *_singButton;
}

+ (double)getSeparatorLeftInset;
+ (id)identifier;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMUIButton *singButton; // @synthesize singButton=_singButton;
@property(readonly, nonatomic) MMUIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(readonly, nonatomic) MMUILabel *heartValueLabel; // @synthesize heartValueLabel=_heartValueLabel;
@property(readonly, nonatomic) MMUILabel *requestMemDescLabel; // @synthesize requestMemDescLabel=_requestMemDescLabel;
@property(readonly, nonatomic) MMUILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) PAGView *playingAnimationView; // @synthesize playingAnimationView=_playingAnimationView;
@property(nonatomic) _Bool isPreparedToSing; // @synthesize isPreparedToSing=_isPreparedToSing;
- (double)adjustedLeftOffsetForEditing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)singButtonAction;
- (void)finishButtonAction;
- (void)updatePlayingAnimationView;
- (void)updateFinishButton;
- (void)updateHeartValueLabel;
- (_Bool)shouldHideHeartValueLabel;
- (unsigned long long)getDisplayMemCount;
- (id)getDisplayMemNames;
- (void)updateRequestMemDescLabel;
- (void)updateRankLabel;
- (void)layoutSingButton;
- (void)layoutPlayingAnimationView;
- (void)layoutHeartValueLabel;
- (void)layoutFinishButton;
- (void)layoutRequestMemDescLabel;
- (void)layoutRankLabel;
- (double)warningPadding;
- (void)setRankIndex:(unsigned int)arg1;
- (void)refreshUI;
- (void)updateMusicLabelWidth;
- (void)updateMusicNameLabelOrigin;
- (void)updateMusicLabel;
- (void)layoutUI;
- (void)reset;
- (void)onTapGesture:(id)arg1;
- (void)prepareForReuse;
- (id)createSingButton;
- (id)createHeartValueLabel;
- (id)createRankLabel;
- (id)createRequestMemDescLabel;
- (id)createFinishButton;

@end

