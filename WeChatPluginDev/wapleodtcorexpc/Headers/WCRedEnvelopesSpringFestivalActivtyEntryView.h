//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCPayWebImageView, WCRedEnvelopesSpringFestivalActivtyEntryInfo;
@protocol WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate;

@interface WCRedEnvelopesSpringFestivalActivtyEntryView : UIView
{
    WCPayWebImageView *_iconImageView;
    UILabel *_titleLabel;
    WCRedEnvelopesSpringFestivalActivtyEntryInfo *_viewModel;
    UIImageView *_arrowImageView;
    id <WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCRedEnvelopesSpringFestivalActivtyEntryInfo *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)onLongActivityEntry:(id)arg1;
- (void)onTapActivityEntry:(id)arg1;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

@end

