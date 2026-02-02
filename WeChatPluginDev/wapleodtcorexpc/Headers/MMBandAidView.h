//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

@interface MMBandAidView : UIView
{
    id _child;
    UIView *_leftPart;
    UIView *_rightPart;
    double _cornerToChild;
    NSLayoutConstraint *_leftPartRightToChildLeft;
    NSLayoutConstraint *_rightPartLeftToChildRight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *rightPartLeftToChildRight; // @synthesize rightPartLeftToChildRight=_rightPartLeftToChildRight;
@property(retain, nonatomic) NSLayoutConstraint *leftPartRightToChildLeft; // @synthesize leftPartRightToChildLeft=_leftPartRightToChildLeft;
@property(nonatomic) double cornerToChild; // @synthesize cornerToChild=_cornerToChild;
@property(retain, nonatomic) UIView *rightPart; // @synthesize rightPart=_rightPart;
@property(retain, nonatomic) UIView *leftPart; // @synthesize leftPart=_leftPart;
@property(retain, nonatomic) id child; // @synthesize child=_child;
- (id)initWithChild:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

