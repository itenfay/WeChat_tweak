//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIViewController;
@protocol IWAVConsoleWebVCHelper;

@interface WAJSContextPlugin_vConsole
{
    UIViewController<IWAVConsoleWebVCHelper> *_vConsoleWebVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController<IWAVConsoleWebVCHelper> *vConsoleWebVC; // @synthesize vConsoleWebVC=_vConsoleWebVC;
- (id)fetchPublicResLogic;
- (void)web_view_configViewFrame:(struct CGRect)arg1;
- (id)web_view;
- (void)releaseVConsoleVC;
- (_Bool)removeVConsoleWebview:(unsigned int)arg1;
- (id)getVConsoleWebview:(unsigned int)arg1;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2;
- (void)sendEvent:(id)arg1 parma:(id)arg2;
- (void)reloadConsoleView;
- (void)web_view_setHtmlId:(unsigned int)arg1;
- (void)genVConsoleWebVCWithExtInfo:(id)arg1;

@end

