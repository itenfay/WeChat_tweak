//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class MMFinderLiveGlobalRankSignView;

@interface MMFinderLiveGlobalRankSignRecordInfo : NSObject
{
    MMFinderLiveGlobalRankSignView *_rankSignView;
    CDUnknownBlockType _invokeCallback;
    CDUnknownBlockType _autoEndInvokeCallback;
    double _maxDuration;
}

@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(copy, nonatomic) CDUnknownBlockType autoEndInvokeCallback; // @synthesize autoEndInvokeCallback=_autoEndInvokeCallback;
@property(copy, nonatomic) CDUnknownBlockType invokeCallback; // @synthesize invokeCallback=_invokeCallback;
@property(nonatomic) __weak MMFinderLiveGlobalRankSignView *rankSignView; // @synthesize rankSignView=_rankSignView;
- (void)autoEndInvoke;
- (void)endInvokeAnimation;
- (void)startInvokeAnimation;

@end
