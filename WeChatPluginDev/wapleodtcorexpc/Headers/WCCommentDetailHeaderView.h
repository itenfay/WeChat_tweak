//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UILabel, UIStackView;
@protocol WCCommentDetailHeaderViewDelegate;

@interface WCCommentDetailHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMUIButton *_closeBtn;
    UIStackView *_titleViewContainer;
    id <WCCommentDetailHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCommentDetailHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIStackView *titleViewContainer; // @synthesize titleViewContainer=_titleViewContainer;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didClickClose:(id)arg1;
- (void)layoutSubviews;
- (void)adjustLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

