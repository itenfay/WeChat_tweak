//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface BrandSingleAuthHistoryTableViewCell : UITableViewCell
{
    _Bool _isEnd;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UIView *_seperatorLine;
    UIView *_endLine;
    UIView *_spaceView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) UIView *spaceView; // @synthesize spaceView=_spaceView;
@property(retain, nonatomic) UIView *endLine; // @synthesize endLine=_endLine;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)formatTime:(int)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)applyRecord:(id)arg1 isEnd:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

