//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class KidsWatchTextFieldItem, MMUILabel, NSString, TakeOrSelectHeadImageLogic, UIImage, UIImageView, UITapGestureRecognizer;
@protocol KidsWatchRegisterFormCardViewDelegate;

@interface KidsWatchRegisterFormCardView : UIView
{
    id <KidsWatchRegisterFormCardViewDelegate> _delegate;
    double _cornerRadius;
    NSString *_ISOCode;
    UIImage *_headImage;
    TakeOrSelectHeadImageLogic *_headImageLogic;
    UITapGestureRecognizer *_tapGesture;
    MMUILabel *_titleLabel;
    UIImageView *_headImageView;
    KidsWatchTextFieldItem *_nickNameTextFieldItem;
    UIView *_nickNameSeparateView;
    KidsWatchTextFieldItem *_phoneNumberTextFieldItem;
    UIView *_phoneNumberSeparateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *phoneNumberSeparateView; // @synthesize phoneNumberSeparateView=_phoneNumberSeparateView;
@property(retain, nonatomic) KidsWatchTextFieldItem *phoneNumberTextFieldItem; // @synthesize phoneNumberTextFieldItem=_phoneNumberTextFieldItem;
@property(retain, nonatomic) UIView *nickNameSeparateView; // @synthesize nickNameSeparateView=_nickNameSeparateView;
@property(retain, nonatomic) KidsWatchTextFieldItem *nickNameTextFieldItem; // @synthesize nickNameTextFieldItem=_nickNameTextFieldItem;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) TakeOrSelectHeadImageLogic *headImageLogic; // @synthesize headImageLogic=_headImageLogic;
@property(retain, nonatomic) UIImage *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) NSString *ISOCode; // @synthesize ISOCode=_ISOCode;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak id <KidsWatchRegisterFormCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGetHeadImage:(id)arg1;
- (void)makeFirstResponder;
- (void)callInfoChangeDelegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)onTapHeadImageView;
- (void)makePhoneNumberFirstResponder;
- (id)rawPhoneNumber;
- (id)nickName;
- (id)defaultHeadImagePlaceHolder;
- (void)initGestures;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

