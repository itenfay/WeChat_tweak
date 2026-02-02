//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface ScreenshotView : UIView
{
    UIView *_viewToMagnify;
    struct CGPoint _touchPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(nonatomic) __weak UIView *viewToMagnify; // @synthesize viewToMagnify=_viewToMagnify;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

