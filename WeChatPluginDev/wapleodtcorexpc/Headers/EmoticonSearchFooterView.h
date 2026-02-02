//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class EmoticonCellLikeButton, UIImageView, UILabel;
@protocol EmoticonSearchCollectionComponentDelegate;

@interface EmoticonSearchFooterView : UICollectionReusableView
{
    id <EmoticonSearchCollectionComponentDelegate> _delegate;
    EmoticonCellLikeButton *_button;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) EmoticonCellLikeButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <EmoticonSearchCollectionComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapWebSearchButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

