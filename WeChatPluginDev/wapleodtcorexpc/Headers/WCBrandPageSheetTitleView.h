//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class BizProfileV2Resp, CContact, MMBrandHeadImageView, MMUILabel, UIButton, UIImageView;
@protocol WCBrandPageSheetTitleViewDelegate;

@interface WCBrandPageSheetTitleView : UIView
{
    id <WCBrandPageSheetTitleViewDelegate> _delegate;
    CContact *_brandContact;
    BizProfileV2Resp *_cacheItem;
    MMBrandHeadImageView *_brandAvatarView;
    MMUILabel *_titleLabel;
    MMUILabel *_nickNameLabel;
    UIImageView *_arrowImageView;
    UIButton *_headerButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *headerButton; // @synthesize headerButton=_headerButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMBrandHeadImageView *brandAvatarView; // @synthesize brandAvatarView=_brandAvatarView;
@property(retain, nonatomic) BizProfileV2Resp *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) __weak id <WCBrandPageSheetTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onViewClick;
- (void)layoutSubviews;
- (void)swithUIStatusWithEntryShowState:(_Bool)arg1;
- (void)showProfileEntry;
- (void)showTitleWithText:(id)arg1;
- (void)initSubviews;
- (void)updateUICompts;
- (id)init;

@end

