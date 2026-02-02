//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface QuickReplyMsgFinishTips : UIView
{
    UIView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTips:(id)arg1;

@end

