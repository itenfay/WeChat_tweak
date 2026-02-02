//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;
@protocol WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate;

@interface WCRedEnvelopesExpiredSkinEntryCollectionViewCell : UICollectionViewCell
{
    _Bool _isSmallMode;
    id <WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate> _m_delegate;
    UIView *_entryBackgroungView;
    UIImageView *_iconImageView;
    UIView *_entryArea;
    UILabel *_entryAreaLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSmallMode; // @synthesize isSmallMode=_isSmallMode;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *entryAreaLabel; // @synthesize entryAreaLabel=_entryAreaLabel;
@property(retain, nonatomic) UIView *entryArea; // @synthesize entryArea=_entryArea;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *entryBackgroungView; // @synthesize entryBackgroungView=_entryBackgroungView;
@property(nonatomic) __weak id <WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onLongActivityEntry:(id)arg1;
- (void)onTapActivityEntry:(id)arg1;
- (void)onGotoExpiredSkinEntry;
- (void)updateBackgroundView;
- (void)updateView:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

