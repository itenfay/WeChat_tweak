//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WCFinderFeedListBannderView : UIView
{
    UILabel *_titleLabel;
}

+ (double)viewH;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupTitle:(id)arg1;
- (void)setupLayoutWithSuperView:(id)arg1;
- (void)setupLayout;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

