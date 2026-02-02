//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NativeSessionBridge : NSObject
{
    void *_magic_ar_session;
}

@property(nonatomic) void *magic_ar_session; // @synthesize magic_ar_session=_magic_ar_session;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (id)initWithSession:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

