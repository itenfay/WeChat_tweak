//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView, WCPayOverseaTypeInfoObject;

@interface WCPayOverseaMainWalletHeaderView : UICollectionReusableView
{
    WCPayOverseaTypeInfoObject *_m_typeInfo;
    UILabel *_m_titleLabel;
    UIView *_m_backgroundView;
}

- (void).cxx_destruct;
@property(retain) UIView *m_backgroundView; // @synthesize m_backgroundView=_m_backgroundView;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(retain, nonatomic) WCPayOverseaTypeInfoObject *m_typeInfo; // @synthesize m_typeInfo=_m_typeInfo;
- (id)contentAccessbilityLabel;
- (void)updateTypeInfo:(id)arg1;
- (void)updateTitleLabel;
- (void)updateBackgroundView;
- (void)updateViewData;
- (void)layoutSubviews;
- (id)init;

@end

