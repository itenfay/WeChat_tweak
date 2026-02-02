//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString;

@interface WCWebviewEvent
{
    _Bool _bCanceled;
    NSObject *_eventContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *eventContext; // @synthesize eventContext=_eventContext;
@property(nonatomic) _Bool bCanceled; // @synthesize bCanceled=_bCanceled;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)eventHashValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

