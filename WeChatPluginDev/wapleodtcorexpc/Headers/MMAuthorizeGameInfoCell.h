//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMAuthorizeGameInfoCellVM, MMUILabel, UIImageView, UIView;

@interface MMAuthorizeGameInfoCell : UITableViewCell
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUILabel *_authLevelLabel;
    UIImageView *_arrowView;
    UIView *_topSeperatorLine;
    UIView *_highlightMaskView;
    MMAuthorizeGameInfoCellVM *_vm;
}

+ (double)rightPadding;
+ (double)leftPadding;
- (void).cxx_destruct;
@property(retain, nonatomic) MMAuthorizeGameInfoCellVM *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UIView *topSeperatorLine; // @synthesize topSeperatorLine=_topSeperatorLine;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *authLevelLabel; // @synthesize authLevelLabel=_authLevelLabel;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)wordingForSelectStatus;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)applyViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

