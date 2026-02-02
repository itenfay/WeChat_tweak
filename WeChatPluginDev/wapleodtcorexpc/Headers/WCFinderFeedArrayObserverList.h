//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderFeedArrayObserver;

@interface WCFinderFeedArrayObserverList : NSObject
{
    WCFinderFeedArrayObserver *_observerHead;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedArrayObserver *observerHead; // @synthesize observerHead=_observerHead;
- (void)notifyDataChanged:(id)arg1 sender:(id)arg2;
- (void)unSink:(id)arg1;
- (void)sinkChange:(id)arg1 action:(SEL)arg2;

@end

