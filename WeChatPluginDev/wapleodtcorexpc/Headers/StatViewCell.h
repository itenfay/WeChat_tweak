//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;
@protocol StatViewCellDelegate;

@interface StatViewCell : UIView
{
    MMUILabel *_rowCountNumber;
    MMUIButton *_rowTitleArrowButton;
    id <StatViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StatViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *rowTitleArrowButton; // @synthesize rowTitleArrowButton=_rowTitleArrowButton;
@property(retain, nonatomic) MMUILabel *rowCountNumber; // @synthesize rowCountNumber=_rowCountNumber;
- (void)onClickToTotalUserStats;
- (void)updateWithTitle:(id)arg1 countNumber:(id)arg2 withAction:(SEL)arg3;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

