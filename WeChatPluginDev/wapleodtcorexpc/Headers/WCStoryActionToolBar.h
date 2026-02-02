//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIView;

@interface WCStoryActionToolBar
{
    UIView *_toolBar;
    NSMutableArray *_toolbarItemList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *toolbarItemList; // @synthesize toolbarItemList=_toolbarItemList;
@property(retain, nonatomic) UIView *toolBar; // @synthesize toolBar=_toolBar;
- (void)clickButton:(id)arg1;
- (void)hideSelf;
- (void)addButtonWithTitle:(id)arg1 iconName:(id)arg2 isDestructive:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)show;
@property(readonly, nonatomic) unsigned long long numberOfButtons;
- (void)addTapRecognizer;
- (void)reloadButtons;
- (id)initWithFrame:(struct CGRect)arg1;

@end

