//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

@interface WCSequentialActionRunner : NSObject
{
    UIView *_rootView;
    NSMutableArray *_actionArr;
    long long _curActionIdx;
}

- (void).cxx_destruct;
@property(nonatomic) long long curActionIdx; // @synthesize curActionIdx=_curActionIdx;
@property(retain, nonatomic) NSMutableArray *actionArr; // @synthesize actionArr=_actionArr;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (void)fastForward;
- (void)runNext;
- (void)runAction;
- (void)sequentialRun;
- (void)addDelayWithDuration:(double)arg1;
- (void)addCallBlock:(CDUnknownBlockType)arg1;
- (void)addAnimateWithDuration:(double)arg1 options:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3;
- (void)addAnimateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
- (id)init;

@end

