//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MMMultiMenuItem;

@interface MenuButton : UIButton
{
    double _targetWidth;
    MMMultiMenuItem *_menuItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMultiMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
- (void)setBackgroundColor:(id)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

