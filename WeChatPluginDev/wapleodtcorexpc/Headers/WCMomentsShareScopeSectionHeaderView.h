//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView;

@interface WCMomentsShareScopeSectionHeaderView : UICollectionReusableView
{
    UIView *_containerView;
    UILabel *_titleLabel;
}

+ (double)heightForTitle:(id)arg1 headerViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)_initViewWithWidth:(double)arg1;
- (void)updateHeaderViewWithWidth:(double)arg1 title:(id)arg2;

@end

