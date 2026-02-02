//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MJFinderAIAssetGenerateTask : NSObject
{
}

- (void)_registerNotification;
- (void)queryWithTaskID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 timeoutInterval:(double)arg2;

@end
