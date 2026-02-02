//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMMusicPlayerContoller, MMQQMusicInfo, MMUIButton, MMUILabel, MMWebImageView, NSString, UIView;
@protocol ShakeMusicResultNoPermMusicCellViewDelegate;

@interface ShakeMusicResultNoPermMusicCellView : UITableViewCell
{
    id <ShakeMusicResultNoPermMusicCellViewDelegate> _cellDelegate;
    long long _index;
    MMQQMusicInfo *_qqMusicInfo;
    UIView *_topSeperateLine;
    UIView *_bottomSeperateLine;
    MMUIButton *_musicInfoContainerButton;
    MMWebImageView *_musicCoverImageView;
    MMUILabel *_songName;
    MMUILabel *_singerName;
    MMUIButton *_playButton;
    MMMusicPlayerContoller *_musicPlayerCtrl;
}

+ (double)getCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicPlayerContoller *musicPlayerCtrl; // @synthesize musicPlayerCtrl=_musicPlayerCtrl;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMUILabel *singerName; // @synthesize singerName=_singerName;
@property(retain, nonatomic) MMUILabel *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) MMWebImageView *musicCoverImageView; // @synthesize musicCoverImageView=_musicCoverImageView;
@property(retain, nonatomic) MMUIButton *musicInfoContainerButton; // @synthesize musicInfoContainerButton=_musicInfoContainerButton;
@property(retain, nonatomic) UIView *bottomSeperateLine; // @synthesize bottomSeperateLine=_bottomSeperateLine;
@property(retain, nonatomic) UIView *topSeperateLine; // @synthesize topSeperateLine=_topSeperateLine;
@property(retain, nonatomic) MMQQMusicInfo *qqMusicInfo; // @synthesize qqMusicInfo=_qqMusicInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <ShakeMusicResultNoPermMusicCellViewDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)infoButtonClicked;
- (void)playButtonClicked;
- (void)newQQMusicInfo:(id)arg1 withIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

