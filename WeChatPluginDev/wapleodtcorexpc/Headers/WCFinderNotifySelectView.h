//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, WCFinderContact;
@protocol WCFinderNotifySelectViewDelegate;

@interface WCFinderNotifySelectView : UIView
{
    id <WCFinderNotifySelectViewDelegate> _delegate;
    unsigned long long _currentSelectType;
    UIButton *_selectButton;
    UIView *_selectLine;
    NSMutableArray *_buttonArray;
    NSMutableArray *_labelArray;
    WCFinderContact *_contact;
    double _buttonTotalWidthSize;
}

+ (double)selectViewWidth;
+ (id)getNotifySelectButtonTitleWithIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) double buttonTotalWidthSize; // @synthesize buttonTotalWidthSize=_buttonTotalWidthSize;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSMutableArray *labelArray; // @synthesize labelArray=_labelArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) __weak UIView *selectLine; // @synthesize selectLine=_selectLine;
@property(nonatomic) __weak UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) unsigned long long currentSelectType; // @synthesize currentSelectType=_currentSelectType;
@property(nonatomic) __weak id <WCFinderNotifySelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)clearUnreadCountWithType:(unsigned long long)arg1;
- (void)setUnreadCount:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (long long)getUnreadCountFromRedDotLabelByType:(unsigned long long)arg1;
- (void)setSelectType:(unsigned long long)arg1 isTriggerByUser:(_Bool)arg2;
- (void)setSelectType:(unsigned long long)arg1;
- (void)setSelectButton:(id)arg1 isTriggerByUser:(_Bool)arg2;
- (void)clickSelectButton:(id)arg1;
- (void)layoutUI;
- (_Bool)isAccessibilityElement;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;

@end

