//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, NSArray, NSString, UIImage, UILabel, UIView;

@interface WAOverallAuthListCell : UITableViewCell
{
    UIImage *_defaultHeaderImage;
    NSArray *_scopeList;
    MMWebImageView *_headImageView;
    UIView *_titleDescContainerView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_arrowView;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleDescContainerView; // @synthesize titleDescContainerView=_titleDescContainerView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
- (_Bool)isDescFit:(id)arg1 width:(double)arg2;
- (id)getFitDescWithDescList:(id)arg1 width:(double)arg2;
- (void)layoutSubviews;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (void)initSubviews;
- (void)setViewDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

