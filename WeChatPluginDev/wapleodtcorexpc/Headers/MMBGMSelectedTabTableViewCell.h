//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMSelectedTabTableViewCellConfig, MMWebImageView, PAGView, UILabel, UIView;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MMBGMSelectedTabTableViewCell
{
    _Bool _isCellSelected;
    _Bool _isPlayable;
    MMWebImageView *_coverView;
    UILabel *_songNameLabel;
    UILabel *_authorNameLabel;
    UILabel *_songDurationLabel;
    UIView *_separatorLine;
    UIView *_coverMaskView;
    PAGView *_pagView;
    MMBGMSelectedTabTableViewCellConfig *_config;
    id <MMBGMSelectedMusicDataProtocol> _musicData;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> musicData; // @synthesize musicData=_musicData;
@property(retain, nonatomic) MMBGMSelectedTabTableViewCellConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) UIView *coverMaskView; // @synthesize coverMaskView=_coverMaskView;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *songDurationLabel; // @synthesize songDurationLabel=_songDurationLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool isCellSelected; // @synthesize isCellSelected=_isCellSelected;
- (id)getMusicInfo;
- (id)getMusicId;
- (void)layoutSubviews;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

