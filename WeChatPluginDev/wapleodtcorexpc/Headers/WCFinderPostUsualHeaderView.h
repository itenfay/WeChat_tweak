//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMUILabel, UIView;

@interface WCFinderPostUsualHeaderView : UITableViewHeaderFooterView
{
    UIView *_topLine;
    MMUILabel *_titleLabel;
}

+ (double)descriptionTableViewCellHeight;
+ (id)createLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (void)setUpTitle:(id)arg1 width:(double)arg2;
- (void)setupUI;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

