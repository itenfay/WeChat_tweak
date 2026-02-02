//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMViewLayoutManager, NSHashTable, NSMutableArray, UIView;

@interface MMViewLayoutComponentItem : NSObject
{
    _Bool _duringLayout;
    unsigned int _layoutPriority;
    long long _type;
    UIView *_view;
    NSHashTable *_weakChildren;
    NSHashTable *_weakChildrenThatAreAlsoParents;
    NSHashTable *_weakParents;
    NSHashTable *_visitedParentsDuringDescendencyCheck;
    MMViewLayoutManager *_layoutMgr;
    NSMutableArray *_bindedLayoutCallbacks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bindedLayoutCallbacks; // @synthesize bindedLayoutCallbacks=_bindedLayoutCallbacks;
@property(nonatomic) __weak MMViewLayoutManager *layoutMgr; // @synthesize layoutMgr=_layoutMgr;
@property(retain, nonatomic) NSHashTable *visitedParentsDuringDescendencyCheck; // @synthesize visitedParentsDuringDescendencyCheck=_visitedParentsDuringDescendencyCheck;
@property(retain, nonatomic) NSHashTable *weakParents; // @synthesize weakParents=_weakParents;
@property(retain, nonatomic) NSHashTable *weakChildrenThatAreAlsoParents; // @synthesize weakChildrenThatAreAlsoParents=_weakChildrenThatAreAlsoParents;
@property(retain, nonatomic) NSHashTable *weakChildren; // @synthesize weakChildren=_weakChildren;
@property(nonatomic) _Bool duringLayout; // @synthesize duringLayout=_duringLayout;
@property(nonatomic) unsigned int layoutPriority; // @synthesize layoutPriority=_layoutPriority;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)getChildrenSet;
- (void)updateLayoutPriority:(unsigned int)arg1 curDepth:(unsigned int)arg2;
- (_Bool)isDescendentItem:(id)arg1 checkFailedSet:(id)arg2;
- (id)init;

@end

