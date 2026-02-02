//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, UIView, WCAppAuthTableViewCellData;
@protocol WCAppAuthTableViewCellDelegate;

@interface WCAppAuthTableViewCell
{
    WCAppAuthTableViewCellData *_cellData;
    id <WCAppAuthTableViewCellDelegate> _delegate;
    MMUILabel *_appNameLabel;
    MMUILabel *_appTypeLabel;
    UIView *_appTypeBgView;
    MMUILabel *_scopeLabel;
    UIImageView *_arrowView;
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_highlightMaskView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
@property(retain, nonatomic) UIView *appTypeBgView; // @synthesize appTypeBgView=_appTypeBgView;
@property(retain, nonatomic) MMUILabel *appTypeLabel; // @synthesize appTypeLabel=_appTypeLabel;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(nonatomic) __weak id <WCAppAuthTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCAppAuthTableViewCellData *cellData; // @synthesize cellData=_cellData;
- (void)layoutSubviews;
- (void)onMultiMenuAppear;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

