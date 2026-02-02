//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface AnnotationUnSelectContentView : UIView
{
    UIView *_outerContentView;
    UIView *_innerContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
@property(retain, nonatomic) UIView *outerContentView; // @synthesize outerContentView=_outerContentView;
- (void)layoutInnerContentView;
- (void)layoutOuterContentView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

