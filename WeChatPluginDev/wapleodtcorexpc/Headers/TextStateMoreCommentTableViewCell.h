//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, WCFinderAnimationLoadingView;

@interface TextStateMoreCommentTableViewCell : UITableViewCell
{
    UILabel *_moreInfoLabel;
    WCFinderAnimationLoadingView *_loadingView;
    unsigned long long _moreType;
    UIButton *_iconView;
    UIView *_bottomView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIButton *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) unsigned long long moreType; // @synthesize moreType=_moreType;
@property(nonatomic) __weak WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UILabel *moreInfoLabel; // @synthesize moreInfoLabel=_moreInfoLabel;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)setUpUI;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSubMoreType:(unsigned long long)arg1 commentMoreCount:(unsigned long long)arg2 authorType:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

