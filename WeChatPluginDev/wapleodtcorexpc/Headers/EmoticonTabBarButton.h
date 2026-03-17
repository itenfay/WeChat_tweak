//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@interface EmoticonTabBarButton : UIButton
{
    _Bool _layoutIgnoreContentRect;
    double _space;
}

@property(nonatomic) _Bool layoutIgnoreContentRect; // @synthesize layoutIgnoreContentRect=_layoutIgnoreContentRect;
@property(nonatomic) double space; // @synthesize space=_space;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

