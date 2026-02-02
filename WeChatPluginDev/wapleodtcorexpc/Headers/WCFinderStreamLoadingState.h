//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol WCFinderStreamLoadingStateDelegate;

@interface WCFinderStreamLoadingState : NSObject
{
    _Bool _isFetching;
    _Bool _hasFetched;
    id <WCFinderStreamLoadingStateDelegate> _delegate;
    NSString *_errorMsg;
    NSData *_nextBuff;
    NSMutableArray *_waitBlocks;
    CDUnknownBlockType _cancelBlock;
}

+ (void)removeAllObserver:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) NSMutableArray *waitBlocks; // @synthesize waitBlocks=_waitBlocks;
@property(retain, nonatomic) NSData *nextBuff; // @synthesize nextBuff=_nextBuff;
@property(nonatomic) _Bool hasFetched; // @synthesize hasFetched=_hasFetched;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) __weak id <WCFinderStreamLoadingStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addObserver:(id)arg1;
- (_Bool)addWaitLoadingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasMore;
- (void)onSuccess:(_Bool)arg1 nextBuff:(id)arg2;
- (void)onFailedWithMsg:(id)arg1;
- (void)cancelRequest:(_Bool)arg1;
- (void)beginCancelSupport:(CDUnknownBlockType)arg1;
- (void)begin:(CDUnknownBlockType)arg1;
- (void)configFooterView:(id)arg1;

@end

