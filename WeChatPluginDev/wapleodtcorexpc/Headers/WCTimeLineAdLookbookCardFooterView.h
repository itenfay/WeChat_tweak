//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, UIImageView;

@interface WCTimeLineAdLookbookCardFooterView : UICollectionReusableView
{
    MMUILabel *_slideTitleLabel;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *slideTitleLabel; // @synthesize slideTitleLabel=_slideTitleLabel;
- (void)updateFooterWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

