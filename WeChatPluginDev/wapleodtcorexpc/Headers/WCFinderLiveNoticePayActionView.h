//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, UIColor;

@interface WCFinderLiveNoticePayActionView : UIView
{
    UIColor *_contentColor;
    MMUIButton *_coinButton;
    MMUILabel *_payLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMUILabel *payLabel; // @synthesize payLabel=_payLabel;
@property(readonly, nonatomic) MMUIButton *coinButton; // @synthesize coinButton=_coinButton;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

