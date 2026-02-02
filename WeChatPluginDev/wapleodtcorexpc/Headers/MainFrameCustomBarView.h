//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MainFrameCustomBarView : UIView
{
    UIView *_leftItemView;
    UIView *_rightItemView;
    UIView *_titleViewContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *titleViewContainer; // @synthesize titleViewContainer=_titleViewContainer;
@property(retain, nonatomic) UIView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) UIView *leftItemView; // @synthesize leftItemView=_leftItemView;
- (void)layoutSubviews;
- (void)setTitleView:(id)arg1;

@end

