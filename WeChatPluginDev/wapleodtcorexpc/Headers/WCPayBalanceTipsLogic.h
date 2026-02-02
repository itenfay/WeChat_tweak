//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView;

@interface WCPayBalanceTipsLogic
{
    UIView *m_containerView;
    CDUnknownBlockType _m_rightBtnBlock;
    CDUnknownBlockType _m_leftBtnBlock;
    NSArray *_m_arrItem;
    NSString *_m_nsTitle;
    NSString *_m_nsContent;
    NSString *_m_nsRemark;
    NSString *_m_nsLeftBtn;
    NSString *_m_nsRightBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsRightBtn; // @synthesize m_nsRightBtn=_m_nsRightBtn;
@property(retain, nonatomic) NSString *m_nsLeftBtn; // @synthesize m_nsLeftBtn=_m_nsLeftBtn;
@property(retain, nonatomic) NSString *m_nsRemark; // @synthesize m_nsRemark=_m_nsRemark;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent=_m_nsContent;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle=_m_nsTitle;
@property(retain, nonatomic) NSArray *m_arrItem; // @synthesize m_arrItem=_m_arrItem;
@property(copy, nonatomic) CDUnknownBlockType m_leftBtnBlock; // @synthesize m_leftBtnBlock=_m_leftBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType m_rightBtnBlock; // @synthesize m_rightBtnBlock=_m_rightBtnBlock;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)show;
- (id)genLabelWithFontSize:(int)arg1 textColor:(id)arg2;
- (void)setupContainerView;
- (id)init;
- (id)initWithTitle:(id)arg1 content:(id)arg2 remark:(id)arg3 leftBtn:(id)arg4 rightBtn:(id)arg5 itemArr:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

