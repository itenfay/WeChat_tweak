//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMMusicLyricPlayingLabel, UILabel, UIView;

@interface MMMusicLyricsPanelCellTableViewCell : UITableViewCell
{
    UILabel *_lyricsLabel;
    MMMusicLyricPlayingLabel *_playingLabel;
    UIView *_highlightedView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resumeProgressAnimation;
- (void)pauseProgressAnimation;
- (void)setPlayingProgress:(double)arg1 animated:(_Bool)arg2 animateDuration:(double)arg3;
- (void)updateLyricTextColor:(_Bool)arg1;
- (void)updateLyric:(id)arg1 bFocus:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

