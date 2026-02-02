//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIImageView;

@interface WCFinderProfileNewLifeInteractionGadgetView : UIView
{
    UIImageView *_imageView;
    MMUILabel *_countLabel;
}

+ (double)estimateHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateWithSvgIconName:(id)arg1 countString:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initLayouts;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

