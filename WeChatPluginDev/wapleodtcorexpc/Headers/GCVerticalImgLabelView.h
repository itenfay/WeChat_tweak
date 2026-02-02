//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface GCVerticalImgLabelView : UIView
{
    UIView *_topView;
    MMWebImageView *_imgView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (id)initWithTopViewWidth:(double)arg1 imgWidth:(double)arg2 imgLabelSpace:(double)arg3 labelLayout:(id)arg4 additionLabelSpace:(double)arg5;

@end

