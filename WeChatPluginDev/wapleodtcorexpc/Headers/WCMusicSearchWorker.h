//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCMusicSearchWorker : NSObject
{
    NSMutableDictionary *_completionDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *completionDictionary; // @synthesize completionDictionary=_completionDictionary;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1 error:(id *)arg2;
- (void)handleCgiReturn:(id)arg1 eventId:(unsigned int)arg2 error:(id)arg3;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 bLongPolling:(_Bool)arg3 userData:(id)arg4;
- (unsigned int)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 completion:(id)arg3;
- (void)cancelRequestWithEventId:(unsigned int)arg1;
- (unsigned int)sendCgiWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)generateRequestWithContext:(id)arg1;
- (unsigned int)searchWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

