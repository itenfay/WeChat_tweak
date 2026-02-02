//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MJPublisherBubbleView : UIView
{
    UILabel *_label;
    UIImageView *_triangleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setText:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

