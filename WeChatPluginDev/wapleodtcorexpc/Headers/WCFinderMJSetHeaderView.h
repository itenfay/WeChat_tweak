//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderMJSetDesignerView;

@interface WCFinderMJSetHeaderView : UICollectionReusableView
{
    double _horizontalPadding;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UIButton *_contactLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_usedLabel;
    UIButton *_takePhotoButton;
    UIButton *_becomeCeatorButton;
    WCFinderMJSetDesignerView *_designerView;
}

+ (double)displayHeightWithVM:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMJSetDesignerView *designerView; // @synthesize designerView=_designerView;
@property(retain, nonatomic) UIButton *becomeCeatorButton; // @synthesize becomeCeatorButton=_becomeCeatorButton;
@property(retain, nonatomic) UIButton *takePhotoButton; // @synthesize takePhotoButton=_takePhotoButton;
@property(retain, nonatomic) UILabel *usedLabel; // @synthesize usedLabel=_usedLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UIButton *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (void)addClickDesignerTarget:(id)arg1 action:(SEL)arg2;
- (void)addClickPostTarget:(id)arg1 action:(SEL)arg2;
- (void)addClickContactTarget:(id)arg1 action:(SEL)arg2;
- (void)update:(id)arg1;
- (void)doLayout;
- (void)layoutSubviews;
- (void)setupViews;
- (id)getTakePhotoBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

