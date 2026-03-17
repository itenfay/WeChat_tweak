//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface FavDetailFooterView : UIView
{
    UIView *_bottomLine;
    UIView *_circleWhiteView;
    UIView *_circle;
}

- (void)layoutSubviews;
- (void)initView;
- (id)init;

@end

