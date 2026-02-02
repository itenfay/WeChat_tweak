//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCC2CMsgImageSquareThumbViewDelegate;

@interface WCC2CMsgImageSquareThumbView
{
    id <WCC2CMsgImageSquareThumbViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCC2CMsgImageSquareThumbViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)showMsgLocation:(id)arg1;
- (void)deleteAction:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)doShareAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

