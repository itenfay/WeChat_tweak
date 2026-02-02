//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderProfileCardCommonView : UIView
{
    UIImageView *_iconView;
    UIView *_outIconView;
    UILabel *_titleLabel;
    UILabel *_summaryLabel;
    UIImageView *_tailIconView;
    CDUnknownBlockType _onClick;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
@property(retain, nonatomic) UIImageView *tailIconView; // @synthesize tailIconView=_tailIconView;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *outIconView; // @synthesize outIconView=_outIconView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)onTap;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)update:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

