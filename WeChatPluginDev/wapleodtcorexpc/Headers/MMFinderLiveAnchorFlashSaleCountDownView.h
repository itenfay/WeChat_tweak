//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MMFinderLiveAnchorFlashSaleCountDownView : UIView
{
    UILabel *_secondLabel;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithSecond:(unsigned long long)arg1;
- (void)startCountDownFrom:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

