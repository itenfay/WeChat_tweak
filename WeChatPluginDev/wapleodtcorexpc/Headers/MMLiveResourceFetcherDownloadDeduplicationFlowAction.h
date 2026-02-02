//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface MMLiveResourceFetcherDownloadDeduplicationFlowAction
{
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *entries; // @synthesize entries=_entries;
- (void)completeTasksForEntry:(id)arg1 succeeded:(_Bool)arg2;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

