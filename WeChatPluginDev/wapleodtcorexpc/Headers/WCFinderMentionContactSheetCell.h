//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FavAttributeCPLabel, UIImageView;

@interface WCFinderMentionContactSheetCell : UITableViewCell
{
    UIImageView *_avatarView;
    FavAttributeCPLabel *_titleLabel;
    FavAttributeCPLabel *_summaryLabel;
    struct CGSize _lastSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavAttributeCPLabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) FavAttributeCPLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
- (void)updateTitle:(id)arg1 avatarUrl:(id)arg2 desc:(id)arg3 hightlightDesc:(id)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_doLayout;
- (void)layoutIfNeeded;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

