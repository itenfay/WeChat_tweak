//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class WCFinderTopPullStatusView;

@interface WCFinderTopPullStatusViewPlaceholder : NSProxy
{
    WCFinderTopPullStatusView *_statusView;
    CDUnknownBlockType _commit;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType commit; // @synthesize commit=_commit;
@property(retain, nonatomic) WCFinderTopPullStatusView *statusView; // @synthesize statusView=_statusView;
- (id)debugDescription;
- (id)description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 commit:(CDUnknownBlockType)arg2;

@end

