//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderTaskWrapperDelegate;

@interface WCFinderTaskWrapper : NSObject
{
    _Bool _bAllowConcurrent;
    NSString *_name;
    CDUnknownBlockType _prepareBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _cancelOrFinshBlock;
    CDUnknownBlockType _runningBlock;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _completeBlock;
    id _waitParsingDepend;
    long long _tag;
    long long _status;
    WCFinderTaskWrapper *_depend;
    id _next;
    id <WCFinderTaskWrapperDelegate> _delegate;
}

+ (id)new:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderTaskWrapperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bAllowConcurrent; // @synthesize bAllowConcurrent=_bAllowConcurrent;
@property(retain, nonatomic) id next; // @synthesize next=_next;
@property(nonatomic) __weak WCFinderTaskWrapper *depend; // @synthesize depend=_depend;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id waitParsingDepend; // @synthesize waitParsingDepend=_waitParsingDepend;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType runningBlock; // @synthesize runningBlock=_runningBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelOrFinshBlock; // @synthesize cancelOrFinshBlock=_cancelOrFinshBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)_wakeByDepend:(id)arg1;
- (void)_fullFilled:(CDUnknownBlockType)arg1;
- (void)complete:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)performRun:(id)arg1 delegate:(id)arg2;
- (void)cleanNext;
- (id)swapNext;
- (void)insertNext:(id)arg1;
- (id)mutArrayNexts;
- (void)removeNext:(id)arg1;
- (id)configDepend:(id)arg1;
- (id)configAllowConcurrent:(_Bool)arg1;
- (id)configTag:(long long)arg1;
- (id)onFinish:(CDUnknownBlockType)arg1;
- (id)onFinishOrCancel:(CDUnknownBlockType)arg1;
- (id)onRunning:(CDUnknownBlockType)arg1;
- (id)onCancel:(CDUnknownBlockType)arg1;
- (id)onPrepare:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

