//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCUIActionSheetLogic
{
    NSMutableDictionary *m_dicTarget;
    NSMutableDictionary *m_dicSel;
    NSMutableDictionary *m_dicHandler;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

