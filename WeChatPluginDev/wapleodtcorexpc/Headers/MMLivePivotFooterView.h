//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMLiveDashedLabelView, NSString, UIImageView;

@interface MMLivePivotFooterView : UICollectionReusableView
{
    unsigned long long _displayState;
    NSString *_titleText;
    MMLiveDashedLabelView *_dashedLabel;
    UIImageView *_loadingRing;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *loadingRing; // @synthesize loadingRing=_loadingRing;
@property(retain, nonatomic) MMLiveDashedLabelView *dashedLabel; // @synthesize dashedLabel=_dashedLabel;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) unsigned long long displayState; // @synthesize displayState=_displayState;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

