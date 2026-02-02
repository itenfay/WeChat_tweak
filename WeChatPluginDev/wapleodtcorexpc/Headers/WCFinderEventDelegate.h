//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface WCFinderEventDelegate : NSObject
{
    struct set<Protocol *, std::less<Protocol *>, std::allocator<Protocol *>> protocols;
    NSMutableSet *_whiteList;
    NSMutableSet *_blackList;
    id _target;
    WCFinderEventDelegate *_next;
    NSMutableDictionary *_signatureMap;
    NSMutableSet *_alreadyFastForwardSelectors;
}

+ (id)globalAlreadyFastForwardSelectors;
+ (id)delegateWithProtocol:(id)arg1 handler:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *alreadyFastForwardSelectors; // @synthesize alreadyFastForwardSelectors=_alreadyFastForwardSelectors;
@property(retain, nonatomic) NSMutableDictionary *signatureMap; // @synthesize signatureMap=_signatureMap;
@property(nonatomic) __weak WCFinderEventDelegate *next; // @synthesize next=_next;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSMutableSet *blackList; // @synthesize blackList=_blackList;
@property(retain, nonatomic) NSMutableSet *whiteList; // @synthesize whiteList=_whiteList;
- (void)_addForwardMethodForSelector:(SEL)arg1;
- (_Bool)delegateHandleForwardInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)cast:(id)arg1;
- (id)cast;
- (void)handle:(id)arg1 name:(id)arg2 selector:(SEL)arg3 action:(CDUnknownBlockType)arg4;
- (void)post:(id)arg1 selector:(SEL)arg2 action:(CDUnknownBlockType)arg3;
- (void)addNextChain:(id)arg1;

@end

