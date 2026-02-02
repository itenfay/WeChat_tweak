//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UILabel;
@protocol MMMusicMVRecommendHeaderViewDelegate;

@interface MMMusicMVRecommendHeaderView : UIView
{
    UILabel *_titleLabel;
    MMUIButton *_closeBtn;
    id <MMMusicMVRecommendHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicMVRecommendHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didClickClose:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

