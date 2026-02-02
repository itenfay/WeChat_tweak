//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveSongItem, MMUILabel, UILabel;
@protocol MMFinderLiveSongManageTableViewCellDelegate;

@interface MMFinderLiveSongManageTableViewCell
{
    _Bool _disable;
    _Bool _shouldAdaptToDarkLight;
    unsigned int _rankIndex;
    MMFinderLiveSongItem *_songItem;
    id <MMFinderLiveSongManageTableViewCellDelegate> _songTableCellDelegate;
    UILabel *_warningLabel;
    double _lastContentViewWidth;
    MMUILabel *_musicNameLabel;
}

+ (double)getSeparatorLeftInset;
+ (id)identifier;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(nonatomic) double lastContentViewWidth; // @synthesize lastContentViewWidth=_lastContentViewWidth;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(nonatomic) _Bool shouldAdaptToDarkLight; // @synthesize shouldAdaptToDarkLight=_shouldAdaptToDarkLight;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(nonatomic) __weak id <MMFinderLiveSongManageTableViewCellDelegate> songTableCellDelegate; // @synthesize songTableCellDelegate=_songTableCellDelegate;
@property(nonatomic) unsigned int rankIndex; // @synthesize rankIndex=_rankIndex;
@property(retain, nonatomic) MMFinderLiveSongItem *songItem; // @synthesize songItem=_songItem;
- (double)warningPadding;
- (void)updateWarningLabel;
- (void)updateMusicLabel;
- (void)onTapGesture:(id)arg1;
- (double)adjustedLeftOffsetForEditing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reset;
- (void)refreshUI;
- (void)updateWarningLabelOrigin;
- (void)updateMusicNameLabelOrigin;
- (void)layoutMusicNameLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

