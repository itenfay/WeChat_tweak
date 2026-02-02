//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView;
@protocol WCBaseInfoItemDelegate;

@interface WCBaseInfoItem
{
    NSString *m_title;
    NSString *m_tip;
    NSString *m_key;
    UIView *m_view;
    UIView *m_superView;
    _Bool m_bEnable;
    _Bool m_bActive;
    id <WCBaseInfoItemDelegate> m_delegate;
    CDUnknownBlockType _m_resignBlk;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_resignBlk; // @synthesize m_resignBlk=_m_resignBlk;
@property(nonatomic) _Bool m_bActive; // @synthesize m_bActive;
@property(readonly, nonatomic) _Bool m_bEnable; // @synthesize m_bEnable;
@property(retain, nonatomic) UIView *m_view; // @synthesize m_view;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;
@property(retain, nonatomic) NSString *m_tip; // @synthesize m_tip;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
- (id)currentAccessibilityDesc;
- (void)resignFirstResponderWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)setEnable:(_Bool)arg1;
- (id)getValue;
- (void)setDelegate:(id)arg1;
- (void)setSuperView:(id)arg1;
- (void)initView:(struct CGRect)arg1;

@end

