//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIImageView, MMUILabel;

@interface WCFinderLiveCompleteMoreFooterView : UIView
{
    MMUIImageView *_arrowImageView;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

