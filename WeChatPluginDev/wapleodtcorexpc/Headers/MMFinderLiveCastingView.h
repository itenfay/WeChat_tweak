//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveCastDeviceViewItem, MMUILabel, UIButton, UIImageView;
@protocol MMFinderLiveCastingViewDelegate;

@interface MMFinderLiveCastingView : UIView
{
    id <MMFinderLiveCastingViewDelegate> _delegate;
    MMLiveCastDeviceViewItem *_viewItem;
    UIButton *_stopButton;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_deviceLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *deviceLabel; // @synthesize deviceLabel=_deviceLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) MMLiveCastDeviceViewItem *viewItem; // @synthesize viewItem=_viewItem;
@property(nonatomic) __weak id <MMFinderLiveCastingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

