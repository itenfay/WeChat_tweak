//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, YYLabel;
@protocol WCFinderCommentAuthorityTipsCellDelegate;

@interface WCFinderCommentAuthorityTipsCell : UITableViewCell
{
    id <WCFinderCommentAuthorityTipsCellDelegate> _delegate;
    UIImageView *_iconView;
    YYLabel *_tipsLabel;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) YYLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderCommentAuthorityTipsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

