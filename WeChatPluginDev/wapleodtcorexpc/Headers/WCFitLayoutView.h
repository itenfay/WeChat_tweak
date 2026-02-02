//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel;

@interface WCFitLayoutView : UIView
{
    MMWebImageView *_leftImageView;
    UILabel *_rightLabel;
    double _maxWidth;
    long long _layoutType;
}

- (void).cxx_destruct;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(readonly, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) MMWebImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initLeftImageRightTitle;

@end

