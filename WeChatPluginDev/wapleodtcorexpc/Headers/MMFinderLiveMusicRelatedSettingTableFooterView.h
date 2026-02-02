//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MMFinderLiveMusicRelatedSettingTableFooterView : UIView
{
    _Bool _enableDisplayEndState;
    double _separatorLeftMargin;
    UIView *_leftEndLine;
    UIView *_rightEndLine;
    UIImageView *_centerDot;
    UIView *_customSeparatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *customSeparatorView; // @synthesize customSeparatorView=_customSeparatorView;
@property(retain, nonatomic) UIImageView *centerDot; // @synthesize centerDot=_centerDot;
@property(retain, nonatomic) UIView *rightEndLine; // @synthesize rightEndLine=_rightEndLine;
@property(retain, nonatomic) UIView *leftEndLine; // @synthesize leftEndLine=_leftEndLine;
@property(nonatomic) double separatorLeftMargin; // @synthesize separatorLeftMargin=_separatorLeftMargin;
@property(nonatomic) _Bool enableDisplayEndState; // @synthesize enableDisplayEndState=_enableDisplayEndState;
- (void)hideEndState;
- (void)displayEndState;
- (void)layoutRightEndLine;
- (void)layoutLeftEndLine;
- (void)layoutCenterDot;
- (void)layoutCustomSeparatorView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

