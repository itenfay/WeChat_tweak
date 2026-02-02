//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCAssetStateView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_tipsLabel;
    UILabel *_actionLabel;
    UIView *_contentView;
    struct CGSize _iconImageSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(readonly, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) struct CGSize iconImageSize; // @synthesize iconImageSize=_iconImageSize;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

