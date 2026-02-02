//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveControlItem, NSString, UIImageView, UILabel;
@protocol WCFinderLiveControlItemCellDelegate;

@interface WCFinderLiveControlItemCell : UIView
{
    _Bool _isActionDisabled;
    _Bool _isImageMirrored;
    MMLiveControlItem *_controlItem;
    UIView *_itemCell;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    id <WCFinderLiveControlItemCellDelegate> _cellDelegate;
    NSString *_redDotPath;
    UIView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSString *redDotPath; // @synthesize redDotPath=_redDotPath;
@property(nonatomic) _Bool isImageMirrored; // @synthesize isImageMirrored=_isImageMirrored;
@property(nonatomic) _Bool isActionDisabled; // @synthesize isActionDisabled=_isActionDisabled;
@property(nonatomic) __weak id <WCFinderLiveControlItemCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *itemCell; // @synthesize itemCell=_itemCell;
@property(retain, nonatomic) MMLiveControlItem *controlItem; // @synthesize controlItem=_controlItem;
- (void)onBadgeEnablementChangedForItem:(id)arg1;
- (void)onClickToControlItem;
- (void)initView;
- (void)updateRedPacketChatroomSelectionStyle:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 MMLiveControlItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

