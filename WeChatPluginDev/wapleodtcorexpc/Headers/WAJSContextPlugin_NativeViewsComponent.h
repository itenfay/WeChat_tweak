//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIView;

@interface WAJSContextPlugin_NativeViewsComponent : NSObject
{
    UIView *_rootView;
    NSMutableDictionary *_nativeViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *nativeViews; // @synthesize nativeViews=_nativeViews;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (id)getSafeNativeViewsWritable:(_Bool)arg1;
- (id)getChildViews;
- (id)getChildViewsByClass:(Class)arg1;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (id)initWithRootView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

