//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIViewController, WAMapAppNavigateItem;
@protocol WANavigateLogicControllerDelegate;

@interface WANavigateLogicController
{
    id <WANavigateLogicControllerDelegate> _delegate;
    NSArray *_allMaps;
    NSArray *_displayMaps;
    WAMapAppNavigateItem *_navigateFrom;
    WAMapAppNavigateItem *_navigateTo;
    UIViewController *_showVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *showVC; // @synthesize showVC=_showVC;
@property(retain, nonatomic) WAMapAppNavigateItem *navigateTo; // @synthesize navigateTo=_navigateTo;
@property(retain, nonatomic) WAMapAppNavigateItem *navigateFrom; // @synthesize navigateFrom=_navigateFrom;
@property(retain, nonatomic) NSArray *displayMaps; // @synthesize displayMaps=_displayMaps;
@property(retain, nonatomic) NSArray *allMaps; // @synthesize allMaps=_allMaps;
@property(nonatomic) __weak id <WANavigateLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigateUsingMap:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)showOpenMapAppMenuFrom:(id)arg1 To:(id)arg2 InVC:(id)arg3;
- (id)selectDisplayNavigateMaps;
- (id)getInstallButtonTitle:(id)arg1;
- (id)getOpenButtonTitle:(id)arg1;
- (id)getUrlSchemeUsingMap:(id)arg1;
- (void)initAllMaps;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

