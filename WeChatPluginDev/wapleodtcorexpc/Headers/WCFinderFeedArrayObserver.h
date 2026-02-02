//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface WCFinderFeedArrayObserver : NSObject
{
    id <NSObject> _observer;
    SEL _action;
    WCFinderFeedArrayObserver *_next;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedArrayObserver *next; // @synthesize next=_next;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id <NSObject> observer; // @synthesize observer=_observer;

@end

