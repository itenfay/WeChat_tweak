//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface PreviewBottomButton : UIButton
{
    UILabel *_contentLabel;
    UIImageView *_iconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 title:(id)arg2;
- (double)totalHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

