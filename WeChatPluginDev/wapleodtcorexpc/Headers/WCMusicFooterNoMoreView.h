//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCMusicFooterNoMoreView : UIView
{
    UIView *_leftLine;
    UIView *_rightLine;
    UIView *_centerDot;
    struct CGSize _lineSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lineSize; // @synthesize lineSize=_lineSize;
@property(retain, nonatomic) UIView *centerDot; // @synthesize centerDot=_centerDot;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (id)generateLineView;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

