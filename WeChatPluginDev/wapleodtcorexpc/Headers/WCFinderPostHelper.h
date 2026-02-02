//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderPostMgr, WCFinderPostMgrDelegateProxy;

@interface WCFinderPostHelper : NSObject
{
    WCFinderPostMgr *_postMgr;
    NSObject *_owner;
    WCFinderPostMgrDelegateProxy *_vcDelegate;
}

+ (void)showPostActionSheet:(id)arg1 params:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPostMgrDelegateProxy *vcDelegate; // @synthesize vcDelegate=_vcDelegate;
@property(nonatomic) __weak NSObject *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) WCFinderPostMgr *postMgr; // @synthesize postMgr=_postMgr;
- (void)onPostHandleBusinessActionPostVC:(id)arg1 postSession:(id)arg2;
- (void)onPostActionFinish;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

