//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, UIImageView, UIView, WCAppAuthScopeInfoItem;

@interface WCAppAuthDetailScopeCellView : UITableViewCell
{
    WCAppAuthScopeInfoItem *_scopeItem;
    unsigned long long _rowIndex;
    UIImageView *_iconView;
    MMUILabel *_descLabel;
    UIView *_topLine;
    UIView *_bottomLine;
}

+ (double)cellHeightForScopeItem:(id)arg1 cellWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) unsigned long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(retain, nonatomic) WCAppAuthScopeInfoItem *scopeItem; // @synthesize scopeItem=_scopeItem;
- (id)iconImageForScope:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)setScopeItem:(id)arg1 isBottomCell:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

