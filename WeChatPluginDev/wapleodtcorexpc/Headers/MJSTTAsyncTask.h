//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface MJSTTAsyncTask : NSObject
{
    NSString *_audioID;
}

@property(readonly, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
- (id)description;
- (id)statusDidUpdateParams;
- (void)handleTaskSuccessImplWithResult:(id)arg1 completionHandlers:(id)arg2;
- (void)handleTaskFailImplWithError:(id)arg1 completionHandlers:(id)arg2;
- (void)processWithResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)queryAsyncRequestImplWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)submitAsyncRequestImplWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)taskTimeoutMillis;
- (void)startWithAudioData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAudioID:(id)arg1 statusDidUpdateSignal:(id)arg2;

@end
