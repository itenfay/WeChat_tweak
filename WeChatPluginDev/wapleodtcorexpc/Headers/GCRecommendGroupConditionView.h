//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface GCRecommendGroupConditionView : UIView
{
    UILabel *_conditionLabel;
    UIImageView *_tickImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *tickImageView; // @synthesize tickImageView=_tickImageView;
@property(retain, nonatomic) UILabel *conditionLabel; // @synthesize conditionLabel=_conditionLabel;
- (double)gcFelxibleLayoutWidth;
- (double)gcMinLayoutWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

