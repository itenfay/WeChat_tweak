//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class NSObject, NSString;
@protocol WCFinderPostMgrDelegate;

@interface WCFinderPostMgrDelegateProxy : NSProxy
{
    NSObject<WCFinderPostMgrDelegate> *_originDelegate;
    NSObject<WCFinderPostMgrDelegate> *_forwardDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<WCFinderPostMgrDelegate> *forwardDelegate; // @synthesize forwardDelegate=_forwardDelegate;
@property(nonatomic) __weak NSObject<WCFinderPostMgrDelegate> *originDelegate; // @synthesize originDelegate=_originDelegate;
- (void)onPostActionFinish;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

