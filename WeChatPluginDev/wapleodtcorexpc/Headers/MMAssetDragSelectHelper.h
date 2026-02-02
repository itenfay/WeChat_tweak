//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITableView;
@protocol MMAssetDragSelectDelegate;

@interface MMAssetDragSelectHelper : NSObject
{
    _Bool _enable;
    _Bool _isPicking;
    _Bool _canPanGestureBegin;
    _Bool _canPanGestureChange;
    _Bool _doSelect;
    id <MMAssetDragSelectDelegate> _delegate;
    long long _maxCount;
    UITableView *_tableView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    unsigned long long _autoAnimState;
    NSMutableSet *_multiSelectSet;
    struct CGPoint _beginPoint;
    struct CGPoint _touchPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(nonatomic) struct CGPoint beginPoint; // @synthesize beginPoint=_beginPoint;
@property(nonatomic) _Bool doSelect; // @synthesize doSelect=_doSelect;
@property(nonatomic) _Bool canPanGestureChange; // @synthesize canPanGestureChange=_canPanGestureChange;
@property(nonatomic) _Bool canPanGestureBegin; // @synthesize canPanGestureBegin=_canPanGestureBegin;
@property(retain, nonatomic) NSMutableSet *multiSelectSet; // @synthesize multiSelectSet=_multiSelectSet;
@property(nonatomic) unsigned long long autoAnimState; // @synthesize autoAnimState=_autoAnimState;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPicking; // @synthesize isPicking=_isPicking;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) __weak id <MMAssetDragSelectDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)genArrayWith:(unsigned long long)arg1 endValue:(unsigned long long)arg2;
- (id)multiSelectArray:(id)arg1 endIndex:(id)arg2;
- (void)cancelScrollAnimation;
- (void)doScrollAnimation:(struct CGPoint)arg1;
- (void)doBottomEdgeScrollAnimation;
- (void)doTopEdgeScrollAnimation;
- (void)updateAutoScrollState;
- (void)multiSelectCancel;
- (void)multiSelectHold;
- (void)multiSelectBegin:(_Bool)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)isLongPressGestureActive;
- (void)handleLongPressGesture:(id)arg1;
- (void)dealloc;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

