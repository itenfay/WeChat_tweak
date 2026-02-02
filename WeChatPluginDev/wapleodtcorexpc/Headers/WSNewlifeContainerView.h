//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterNewLifeMainTabViewController, NSNumber, NSString, WSLocalTemplateConfig;

@interface WSNewlifeContainerView
{
    _Bool _enablePageCache;
    _Bool _active;
    FlutterNewLifeMainTabViewController *_mainTabViewController;
    WSLocalTemplateConfig *_config;
    NSNumber *_categoryId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool enablePageCache; // @synthesize enablePageCache=_enablePageCache;
@property(retain, nonatomic) WSLocalTemplateConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) FlutterNewLifeMainTabViewController *mainTabViewController; // @synthesize mainTabViewController=_mainTabViewController;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onQuitWSWebView:(_Bool)arg1;
- (void)onEnterWSWebView:(_Bool)arg1;
- (id)onPreReport:(id)arg1;
- (void)exposed;
- (void)initViewIfNeed;
- (void)dealloc;
- (id)getCategoryId;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

