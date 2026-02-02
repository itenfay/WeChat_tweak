//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>

@class NSArray, NSMutableArray;

@interface SemanticsObject : UIAccessibilityElement
{
    struct scoped_nsobject<SemanticsObjectContainer> _container;
    NSMutableArray *_children;
    NSMutableArray *_childrenInHitTestOrder;
    _Bool _inDealloc;
    int _uid;
    SemanticsObject *_parent;
    WeakPtr_9998a1eb _bridge;
    struct SemanticsNode _node;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *childrenInHitTestOrder; // @synthesize childrenInHitTestOrder=_childrenInHitTestOrder;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) struct SemanticsNode node; // @synthesize node=_node;
@property(readonly, nonatomic) WeakPtr_9998a1eb bridge; // @synthesize bridge=_bridge;
@property(nonatomic) SemanticsObject *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) int uid; // @synthesize uid=_uid;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)accessibilityActivate;
- (id)accessibilityContainer;
- (void)setAccessibilityContainer:(id)arg1;
- (struct CGRect)globalRect;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityAttributedValue;
- (id)accessibilityValue;
- (id)accessibilityAttributedHint;
- (id)accessibilityHint;
- (id)accessibilityAttributedLabel;
- (_Bool)accessibilityScrollToVisibleWithChild:(id)arg1;
- (_Bool)accessibilityScrollToVisible;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)search:(struct CGPoint)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (_Bool)onCustomAccessibilityAction:(id)arg1;
- (void)collectRoutes:(id)arg1;
- (_Bool)isFocusable;
- (_Bool)isAccessibilityElement;
- (void)showOnScreen;
- (id)createAttributedStringFromString:(id)arg1 withAttributes:(const void *)arg2;
- (void)privateSetParent:(id)arg1;
@property(readonly, nonatomic) id nativeAccessibility;
- (id)routeName;
- (void)replaceChildAtIndex:(long long)arg1 withChild:(id)arg2;
- (_Bool)nodeShouldTriggerAnnouncement:(const void *)arg1;
- (_Bool)nodeWillCauseScroll:(const void *)arg1;
- (_Bool)nodeWillCauseLayoutChange:(const void *)arg1;
- (void)accessibilityBridgeDidFinishUpdate;
- (void)setSemanticsNode:(const void *)arg1;
- (_Bool)isAccessibilityBridgeAlive;
@property(readonly, nonatomic) _Bool hasChildren;
- (void)dealloc;
- (id)initWithBridge:(WeakPtr_9998a1eb)arg1 uid:(int)arg2;
- (id)init;

@end

