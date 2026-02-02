//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView;

@interface WCFinderProfileEndlineCell : UICollectionReusableView
{
    UIView *_leftLine;
    UIView *_rightLine;
    UILabel *_textLabel;
}

+ (double)displayHeightWithWidth:(double)arg1;
+ (double)textLabelWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

