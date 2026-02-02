//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveRewardGiftCoinButton, MMUIButton, MMUILabel, NSString;

@interface MMFinderLiveChooseClarityViewNavBar : UIView
{
    CDUnknownBlockType _leftButtonClickBLock;
    CDUnknownBlockType _rightButtonClickBLock;
    MMUIButton *_closeButton;
    MMUIButton *_rightButton;
    MMUILabel *_titleLabel;
    UIView *_sepelateLine;
    MMLiveRewardGiftCoinButton *_coinButton;
    MMUIButton *_ticketCoinButton;
    unsigned long long _type;
    NSString *_rightText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) MMUIButton *ticketCoinButton; // @synthesize ticketCoinButton=_ticketCoinButton;
@property(retain, nonatomic) MMLiveRewardGiftCoinButton *coinButton; // @synthesize coinButton=_coinButton;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) CDUnknownBlockType rightButtonClickBLock; // @synthesize rightButtonClickBLock=_rightButtonClickBLock;
@property(copy, nonatomic) CDUnknownBlockType leftButtonClickBLock; // @synthesize leftButtonClickBLock=_leftButtonClickBLock;
- (void)hideRightButton;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)stopLoading;
- (void)startLoading;
- (void)updateCoinButtonTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSeparateLine;
- (void)layoutNavTicketCoinButton;
- (void)layoutNavCoinButton;
- (void)layoutNavRightButton;
- (void)layoutNavLeftButton;
- (void)layoutTitleView;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

