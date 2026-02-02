//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIView;

@interface EditImageColorSquareBarButton : UIButton
{
    UIView *_backColorView;
    UIView *_frontColorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *frontColorView; // @synthesize frontColorView=_frontColorView;
@property(retain, nonatomic) UIView *backColorView; // @synthesize backColorView=_backColorView;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)setColor:(id)arg1;
- (double)frontSize;
- (double)backSize;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

