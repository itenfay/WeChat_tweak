//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMFinderLiveConnectMicPreviewPlaceholderView : UIView
{
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_labelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

