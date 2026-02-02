//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TPPlayerLogContext;

@interface TPPrepareFailReporter
{
    TPPlayerLogContext *_logCtx;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerLogContext *logCtx; // @synthesize logCtx=_logCtx;
- (void)onPlayerError:(id)arg1;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (id)init;

@end

