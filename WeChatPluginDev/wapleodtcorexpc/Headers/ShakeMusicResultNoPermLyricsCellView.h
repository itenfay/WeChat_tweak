//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel;

@interface ShakeMusicResultNoPermLyricsCellView : UITableViewCell
{
    MMUILabel *_lyricsItem;
}

+ (double)getCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *lyricsItem; // @synthesize lyricsItem=_lyricsItem;
- (void)mySelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setLyrics:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

