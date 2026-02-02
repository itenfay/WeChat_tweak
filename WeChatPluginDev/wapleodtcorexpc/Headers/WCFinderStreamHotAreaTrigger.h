//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITableViewCell, UIViewController;
@protocol WCFinderStreamHotAreaAdapter, WCFinderStreamHotAreaTriggerDelegate;

@interface WCFinderStreamHotAreaTrigger : NSObject
{
    _Bool _isScrolling;
    id <WCFinderStreamHotAreaTriggerDelegate> _delegate;
    double _guideLine;
    NSObject *_lastPlayIdentifier;
    UIViewController *_vc;
    id <WCFinderStreamHotAreaAdapter> _adapter;
    UITableViewCell *_lastPlayCell;
    NSMutableArray *_pendingRelease;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingRelease; // @synthesize pendingRelease=_pendingRelease;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) __weak UITableViewCell *lastPlayCell; // @synthesize lastPlayCell=_lastPlayCell;
@property(retain, nonatomic) id <WCFinderStreamHotAreaAdapter> adapter; // @synthesize adapter=_adapter;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSObject *lastPlayIdentifier; // @synthesize lastPlayIdentifier=_lastPlayIdentifier;
@property(nonatomic) double guideLine; // @synthesize guideLine=_guideLine;
@property(nonatomic) __weak id <WCFinderStreamHotAreaTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)emptyCollectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)emptyTableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)emptyScrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)emptyScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)emptyScrollViewWillBeginDragging:(id)arg1;
- (void)cleanPendingReleasePlayer;
- (void)_pushReleaseBlock:(CDUnknownBlockType)arg1;
- (void)_dropFocusForLast:(id)arg1;
- (void)_doTrigger:(double)arg1 forDrag:(_Bool)arg2;
- (void)throttleTrigger;
- (void)trigger;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)beforeScrollViewSetDelegate:(id)arg1;
- (void)hookDelegate:(id)arg1 selector:(SEL)arg2 empty:(SEL)arg3 block:(id)arg4;
- (void)hookScrollViewDelegate:(id)arg1 fromHook:(_Bool)arg2;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

