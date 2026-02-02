//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, UIView;

@interface MMViewLayoutManager : NSObject
{
    NSMutableDictionary *_viewToItemMap;
    NSMutableDictionary *_typeToItemArrayMap;
    NSMutableDictionary *_typeToItemListenerArrayMap;
    NSMutableSet *_topLevelItems;
    NSMutableSet *_dirtyItems;
    NSMutableSet *_parentsForDirtyItems;
    UIView *_topLevelView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *topLevelView; // @synthesize topLevelView=_topLevelView;
@property(retain, nonatomic) NSMutableSet *parentsForDirtyItems; // @synthesize parentsForDirtyItems=_parentsForDirtyItems;
@property(retain, nonatomic) NSMutableSet *dirtyItems; // @synthesize dirtyItems=_dirtyItems;
@property(retain, nonatomic) NSMutableSet *topLevelItems; // @synthesize topLevelItems=_topLevelItems;
@property(retain, nonatomic) NSMutableDictionary *typeToItemListenerArrayMap; // @synthesize typeToItemListenerArrayMap=_typeToItemListenerArrayMap;
@property(retain, nonatomic) NSMutableDictionary *typeToItemArrayMap; // @synthesize typeToItemArrayMap=_typeToItemArrayMap;
@property(retain, nonatomic) NSMutableDictionary *viewToItemMap; // @synthesize viewToItemMap=_viewToItemMap;
- (id)getOrCreateItemFromView:(id)arg1 type:(long long)arg2;
- (void)unregisterView:(id)arg1;
- (void)notifyRelayoutForItems:(id)arg1 currentUpdatedItems:(id)arg2 startPriority:(unsigned int)arg3 forceLayout:(_Bool)arg4;
- (void)notifyRelayoutForItems:(id)arg1 startPriority:(unsigned int)arg2 forceLayout:(_Bool)arg3;
- (void)setNeedsLayout:(id)arg1;
- (void)setNeedsNotifyLayoutChanges:(id)arg1;
- (void)notifyLayoutChanges:(id)arg1;
- (void)layoutAllDirtyViews;
- (void)layoutAllViews;
- (void)registerLayoutDependencyForView:(id)arg1 dependentView:(id)arg2;
- (void)registerLayoutDependencyForView:(id)arg1 dependentTypes:(id)arg2;
- (void)registerLayoutDependencyCallback:(CDUnknownBlockType)arg1 dependentView:(id)arg2;
- (void)registerLayoutDependencyForView:(id)arg1 dependentType:(long long)arg2;
- (void)registerLayoutDependencyForView:(id)arg1 dependentTypes:(id)arg2 initCallback:(CDUnknownBlockType)arg3;
- (void)registerLayoutDependencyForView:(id)arg1 dependentType:(long long)arg2 initCallback:(CDUnknownBlockType)arg3;
- (void)registerView:(id)arg1 withType:(long long)arg2;
- (void)dealloc;
- (id)initWithTopLevelView:(id)arg1;

@end

