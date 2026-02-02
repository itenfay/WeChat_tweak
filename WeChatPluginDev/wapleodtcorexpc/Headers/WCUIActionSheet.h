//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCUIActionSheetLogic;

@interface WCUIActionSheet
{
    WCUIActionSheetLogic *logic;
    id m_userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
- (void)addCustomViewWithItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDestructiveButtonTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDestructiveButtonTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addCancelBtnTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addCancelBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

