//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView, UIView;

@interface WCFinderLiveNoticeViewItemView : UIButton
{
    _Bool _showCoveredStyle;
    _Bool _isInList;
    UIImageView *_arrowImageView;
    UIView *_topLineView;
    double _arrowPaddingRightWhenNotInList;
}

- (void).cxx_destruct;
@property(nonatomic) double arrowPaddingRightWhenNotInList; // @synthesize arrowPaddingRightWhenNotInList=_arrowPaddingRightWhenNotInList;
@property(nonatomic) _Bool isInList; // @synthesize isInList=_isInList;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) _Bool showCoveredStyle; // @synthesize showCoveredStyle=_showCoveredStyle;
- (double)getCardArrowPaddingRight;
- (void)layoutSubviews;
- (void)updateIsInList:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

