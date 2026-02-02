//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveReplayGreateTimeModel, MMUILabel, MMWebImageView, UIImageView, UIView;

@interface WCFinderLiveReplayMomentsViewCell : UICollectionViewCell
{
    _Bool _hideSeperatorLine;
    MMFinderLiveReplayGreateTimeModel *_replayMoment;
    MMWebImageView *_momentImageView;
    UIImageView *_playImageView;
    MMUILabel *_momentTimeLabel;
    UIView *_seperatorLine;
    MMUILabel *_momentDescLabel;
}

+ (double)momentCellsSpace;
+ (double)extraTopInset;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *momentDescLabel; // @synthesize momentDescLabel=_momentDescLabel;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) MMUILabel *momentTimeLabel; // @synthesize momentTimeLabel=_momentTimeLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) MMWebImageView *momentImageView; // @synthesize momentImageView=_momentImageView;
@property(nonatomic) _Bool hideSeperatorLine; // @synthesize hideSeperatorLine=_hideSeperatorLine;
@property(retain, nonatomic) MMFinderLiveReplayGreateTimeModel *replayMoment; // @synthesize replayMoment=_replayMoment;
- (void)layoutMomentImageView;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateReplayMoment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

