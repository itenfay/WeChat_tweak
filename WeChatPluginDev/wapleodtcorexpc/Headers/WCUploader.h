//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCUploader
{
    long long eventID;
    _Bool isCancelled;
    _Bool isUploading;
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)onRequest:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)onSetRequest:(id)arg1;
- (void)_callbackCancelBlockInterrupted:(CDUnknownBlockType)arg1;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)canInterrupt;
- (void)setFinished;
- (void)run;
- (_Bool)startRequest;
- (void)dealloc;

@end

