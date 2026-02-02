//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface MMWebViewPlugin_CustomNavigationBar
{
    CDUnknownBlockType _onClickRightNavItem;
    NSMutableDictionary *_dictNavBarItemStateStorage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictNavBarItemStateStorage; // @synthesize dictNavBarItemStateStorage=_dictNavBarItemStateStorage;
- (void)setPageSubTitle:(id)arg1;
- (void)setTitleColorAndUpdate:(id)arg1;
- (void)setTitle:(id)arg1 color:(id)arg2;
- (void)setRightNavBarItemDisableMinimizeBlock:(_Bool)arg1;
- (void)setRightSearchItemHidden:(_Bool)arg1;
- (void)setRightNavBarItemHidden:(_Bool)arg1;
- (void)setRightNavBarItemTitle:(id)arg1 color:(id)arg2 icon:(id)arg3 clickAction:(CDUnknownBlockType)arg4;
- (void)setLeftNavBarItemTitle:(id)arg1 color:(id)arg2;
- (void)setNavBarColor:(id)arg1;
- (id)naviationBarItemCustomStateWithContextId:(id)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

@end

