//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString;

@interface WCFinderLiteAppStore : NSObject
{
    CDUnknownBlockType _complectionBlock;
    unsigned long long _callBackID;
    id _context;
    MMTimer *_overTimeCheck;
}

+ (void)dispatchStore:(id)arg1 actionName:(id)arg2 json:(id)arg3 complection:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *overTimeCheck; // @synthesize overTimeCheck=_overTimeCheck;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) unsigned long long callBackID; // @synthesize callBackID=_callBackID;
@property(copy, nonatomic) CDUnknownBlockType complectionBlock; // @synthesize complectionBlock=_complectionBlock;
- (void)onStoreSetData:(id)arg1 changes:(id)arg2;
- (void)onStoreSendResult:(id)arg1 callbackId:(int)arg2 resultType:(id)arg3 result:(id)arg4;
- (void)dealloc;
- (void)checkOverTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

