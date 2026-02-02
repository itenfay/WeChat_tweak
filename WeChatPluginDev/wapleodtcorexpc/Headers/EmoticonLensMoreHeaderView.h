//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

@interface EmoticonLensMoreHeaderView : UICollectionReusableView
{
    _Bool _showTopSeparator;
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_topSeparator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

