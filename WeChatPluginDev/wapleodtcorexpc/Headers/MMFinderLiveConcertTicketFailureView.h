//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface MMFinderLiveConcertTicketFailureView : UIView
{
    CDUnknownBlockType _retryBlock;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIButton *_retryButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
- (void)onRetryButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 retryBlock:(CDUnknownBlockType)arg2;

@end

