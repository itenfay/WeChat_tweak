//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMLiveMsgTipsExpandViewModel, MMUIButton, MMUILabel, UIView;
@protocol MMLiveMsgTipsExpandViewCellDelegate;

@interface MMLiveMsgTipsExpandViewCell
{
    id <MMLiveMsgTipsExpandViewCellDelegate> _delegate;
    UIView *_bubbleView;
    MMHeadImageView *_headImageView;
    MMUILabel *_liveNameLabel;
    MMUILabel *_anchorNameLabel;
    MMUIButton *_closeButton;
    UIView *_seperatorLine;
    MMLiveMsgTipsExpandViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveMsgTipsExpandViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) MMUILabel *liveNameLabel; // @synthesize liveNameLabel=_liveNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) __weak id <MMLiveMsgTipsExpandViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

