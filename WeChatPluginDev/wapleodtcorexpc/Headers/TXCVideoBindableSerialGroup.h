//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TXIVideoBindable;

@interface TXCVideoBindableSerialGroup : NSObject
{
    id <TXIVideoBindable> _head;
    id <TXIVideoBindable> _tail;
    NSString *_tag;
    id <TXIVideoBindable> _nextBindable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TXIVideoBindable> nextBindable; // @synthesize nextBindable=_nextBindable;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id <TXIVideoBindable> tail; // @synthesize tail=_tail;
@property(retain, nonatomic) id <TXIVideoBindable> head; // @synthesize head=_head;
- (void)processVideoFrameResult:(id)arg1;
- (id)bindTo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

