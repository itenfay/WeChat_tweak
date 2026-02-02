//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class InterceptWin, NSString, WCPayHalfPageSheet;

@interface WCPayInterceptWinLogic : NSObject
{
    InterceptWin *_interceptWin;
    WCPayHalfPageSheet *_halfPageSheet;
}

+ (void)handleJumpItem:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
+ (void)handleJumpItem:(id)arg1 isPresent:(_Bool)arg2 didClickBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayHalfPageSheet *halfPageSheet; // @synthesize halfPageSheet=_halfPageSheet;
@property(retain, nonatomic) InterceptWin *interceptWin; // @synthesize interceptWin=_interceptWin;
- (void)handleInterceptWin:(id)arg1 isPresent:(_Bool)arg2 didClickBlock:(CDUnknownBlockType)arg3;
- (void)handleInterceptWin:(id)arg1 didClickBlock:(CDUnknownBlockType)arg2;
- (void)handleInterceptWin:(id)arg1;
- (_Bool)shouldHandleInterceptWin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

