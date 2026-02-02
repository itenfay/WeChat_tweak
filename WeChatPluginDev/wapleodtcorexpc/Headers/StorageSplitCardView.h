//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton;
@protocol StorageSplitCardViewDelegate;

@interface StorageSplitCardView : UIView
{
    id <StorageSplitCardViewDelegate> _delegate;
    UIView *_backgroundView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIButton *_actionButton;
    unsigned long long _viewType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <StorageSplitCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onManageChatLogClick;
- (void)onManageResourceClick;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(unsigned long long)arg2;

@end

