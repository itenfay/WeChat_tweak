//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLocatingCoordinateLogic, MMUIActivityIndicatorView, MMUIButton, NSString, UILabel;
@protocol WCAddressHeadViewDelegate;

@interface WCAddressPickerHeadView : UIView
{
    id <WCAddressHeadViewDelegate> m_delegate;
    int m_maxStageComponent;
    unsigned long long _geoTag;
    NSString *province;
    NSString *city;
    NSString *district;
    NSString *street;
    NSString *detail;
    MMUIActivityIndicatorView *_loadingView;
    UILabel *_placeholderLabel;
    UILabel *_addressLabel;
    UIView *_maskView;
    MMUIButton *_rightButton;
    MMLocatingCoordinateLogic *_locatingLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void)updateWithLocatingError;
- (void)updateWithLocation;
- (void)onClickRightButton;
- (_Bool)hasLocation;
- (void)startLocating;
- (void)setMaxStageComponent:(int)arg1;
- (void)setHeaderDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

