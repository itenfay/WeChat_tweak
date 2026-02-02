//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, RichTextView, UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderWechatMentionCellViewModel;
@protocol WCFinderWechatMentionFollowApplyTableViewCellDelegate;

@interface WCFinderWechatMentionFollowApplyTableViewCell : UITableViewCell
{
    id <WCFinderWechatMentionFollowApplyTableViewCellDelegate> _delegate;
    WCFinderHeadImageView *_headImageView;
    RichTextView *_titleView;
    UILabel *_timestampLabel;
    UIImageView *_interactImageView;
    UIView *_lineView;
    NSLayoutConstraint *_titleWidthConstraint;
    WCFinderWechatMentionCellViewModel *_viewModel;
    UIView *_multiHeadImageView;
    WCFinderHeadImageView *_frontHeadImageView;
    WCFinderHeadImageView *_backHeadImageView;
}

+ (double)calculateCellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderHeadImageView *backHeadImageView; // @synthesize backHeadImageView=_backHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *frontHeadImageView; // @synthesize frontHeadImageView=_frontHeadImageView;
@property(nonatomic) __weak UIView *multiHeadImageView; // @synthesize multiHeadImageView=_multiHeadImageView;
@property(retain, nonatomic) WCFinderWechatMentionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *interactImageView; // @synthesize interactImageView=_interactImageView;
@property(nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(nonatomic) __weak RichTextView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <WCFinderWechatMentionFollowApplyTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWechatMentionCellViewModelCellHeightChanged:(id)arg1;
- (void)layoutUIWithViewModel:(id)arg1 width:(double)arg2;
- (void)updateNotifyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)setupViewLayout;
- (void)setupMultiImageView;
- (void)setupUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

