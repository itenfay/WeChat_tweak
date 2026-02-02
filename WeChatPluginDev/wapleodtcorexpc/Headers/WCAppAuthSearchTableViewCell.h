//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, UIView, WCAppAuthTableViewCellData;

@interface WCAppAuthSearchTableViewCell : UITableViewCell
{
    WCAppAuthTableViewCellData *_cellData;
    MMUILabel *_appNameLabel;
    MMUILabel *_appTypeLabel;
    UIView *_appTypeBgView;
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_highlightMaskView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *appTypeBgView; // @synthesize appTypeBgView=_appTypeBgView;
@property(retain, nonatomic) MMUILabel *appTypeLabel; // @synthesize appTypeLabel=_appTypeLabel;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) WCAppAuthTableViewCellData *cellData; // @synthesize cellData=_cellData;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

