//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveResourceFetcherFanoutFlowAction, MMLiveStorageCleanupPinningToken, NSMutableDictionary;

@interface MMFinderLiveAnchorCustomizeRewardPagFileLoader : NSObject
{
    MMLiveResourceFetcherFanoutFlowAction *_resourceFetcher;
    NSMutableDictionary *_taskDictionary;
    NSMutableDictionary *_completionDictionary;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(retain, nonatomic) NSMutableDictionary *completionDictionary; // @synthesize completionDictionary=_completionDictionary;
@property(retain, nonatomic) NSMutableDictionary *taskDictionary; // @synthesize taskDictionary=_taskDictionary;
@property(retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *resourceFetcher; // @synthesize resourceFetcher=_resourceFetcher;
- (void)loadPagFileWithUrl:(id)arg1 md5:(id)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

