//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface AnnotationSelectContentView : UIView
{
    UIImageView *_outerContentImgView;
    UIView *_innerContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
@property(retain, nonatomic) UIImageView *outerContentImgView; // @synthesize outerContentImgView=_outerContentImgView;
- (void)layoutInnerContentView;
- (void)layoutOuterContentImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

