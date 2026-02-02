//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIToolbar, WAJSContextPlugin_NativeViewsComponent;

@interface WANativeKeyboardAccessoryView : UIView
{
    WAJSContextPlugin_NativeViewsComponent *_component;
    UIToolbar *_toolbar;
}

- (void).cxx_destruct;
- (void)addToolbarToView:(id)arg1;
- (void)removeToolBarFromView;
- (void)setToolBar:(id)arg1;
- (id)component;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (void)changetoHeight:(double)arg1;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

