//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface GCDragDecorateView : UIView
{
    _Bool _isDragged;
    UIImageView *_decorateView;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIImageView *decorateView; // @synthesize decorateView=_decorateView;
- (void)layoutSubviews;
- (void)setUpUI;

@end

