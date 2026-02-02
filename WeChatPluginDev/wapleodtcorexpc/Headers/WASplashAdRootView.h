//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAJSContextPlugin_NativeViewsComponent;

@interface WASplashAdRootView
{
    WAJSContextPlugin_NativeViewsComponent *_component;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAJSContextPlugin_NativeViewsComponent *component; // @synthesize component=_component;
- (id)rootView;
- (struct CGRect)rootViewFrame;
- (id)getChildViewsByClass:(Class)arg1;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

