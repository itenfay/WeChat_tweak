//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol TXIVideoBindable;

@interface TXCVideoBindableParallelGroup : NSObject
{
    NSMutableArray *_filters;
    id <TXIVideoBindable> _nextBindable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TXIVideoBindable> nextBindable; // @synthesize nextBindable=_nextBindable;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
- (void)processVideoFrameResult:(id)arg1;
- (id)bindTo:(id)arg1;
- (void)removeFilter:(id)arg1;
- (void)addFilter:(id)arg1;
- (id)initWithFilters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

