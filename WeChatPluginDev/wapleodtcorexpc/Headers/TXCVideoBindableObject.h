//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TXIVideoBindable;

@interface TXCVideoBindableObject : NSObject
{
    _Bool _checkInterval;
    NSString *_tag;
    id <TXIVideoBindable> _nextBindable;
}

- (void).cxx_destruct;
@property(retain) id <TXIVideoBindable> nextBindable; // @synthesize nextBindable=_nextBindable;
@property(nonatomic) _Bool checkInterval; // @synthesize checkInterval=_checkInterval;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
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

