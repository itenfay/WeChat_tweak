//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class NSString;
@protocol UIScrollViewDelegate;

@interface WCFinderStreamProfileViewScrollProxy : NSProxy
{
    struct _DelegateFlag _delegateFlag;
    struct _DelegateFlag _forwardDelegateFlag;
    id <UIScrollViewDelegate> _forwardDelegate;
    id <UIScrollViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> forwardDelegate; // @synthesize forwardDelegate=_forwardDelegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)checkDelegate:(struct _DelegateFlag *)arg1 delegate:(id)arg2;

@end

