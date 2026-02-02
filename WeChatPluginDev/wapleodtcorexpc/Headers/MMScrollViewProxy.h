//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class NSString;
@protocol UIScrollViewDelegate;

@interface MMScrollViewProxy : NSProxy
{
    _Bool _scrolling;
    id <UIScrollViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
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
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;

@end

