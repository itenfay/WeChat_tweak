//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface WCCommentListContentBackgroundView : UIView
{
    CAGradientLayer *_backgroundLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void)layoutSubviews;
- (void)loadBackgroundLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

