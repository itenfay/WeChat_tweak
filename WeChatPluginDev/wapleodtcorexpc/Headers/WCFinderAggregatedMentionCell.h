//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class RichTextView, UILabel, UIView, WCFinderHeadImageView, WCFinderInteractionLabelGroupView, WCFinderMention;

@interface WCFinderAggregatedMentionCell : UITableViewCell
{
    WCFinderMention *_mention;
    WCFinderHeadImageView *_avatarImageView;
    RichTextView *_nicknameLabel;
    UILabel *_timeLabel;
    WCFinderInteractionLabelGroupView *_nicknameTailLabel;
    WCFinderInteractionLabelGroupView *_bottomInteractLabel;
    UIView *_separatorLine;
    double _layoutWidth;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel; // @synthesize bottomInteractLabel=_bottomInteractLabel;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel; // @synthesize nicknameTailLabel=_nicknameTailLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) RichTextView *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
- (double)nicknameMinWidth;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (void)updateWithMention:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

