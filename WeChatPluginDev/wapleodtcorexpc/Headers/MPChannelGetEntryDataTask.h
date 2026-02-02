//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPChannelGetEntryDataReq;

@interface MPChannelGetEntryDataTask : NSObject
{
    MPChannelGetEntryDataReq *_request;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MPChannelGetEntryDataReq *request; // @synthesize request=_request;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (int)covertSceneToPbScene:(unsigned int)arg1;
- (unsigned long long)covertAppDebugModeFromRespVersion:(int)arg1;
- (void)callbackCompletionIsSuccess:(_Bool)arg1 entryData:(id)arg2 strategyInfo:(id)arg3;
- (void)handleChannelEntryDataResp:(id)arg1;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithReq:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

