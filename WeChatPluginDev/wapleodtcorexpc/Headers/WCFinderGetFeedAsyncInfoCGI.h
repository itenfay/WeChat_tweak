//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCFinderGetFeedAsyncInfoCGIConfig;

@interface WCFinderGetFeedAsyncInfoCGI
{
    int _asyncLoadInfoScene;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSMutableArray *_scenesArray;
    WCFinderGetFeedAsyncInfoCGIConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGetFeedAsyncInfoCGIConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableArray *scenesArray; // @synthesize scenesArray=_scenesArray;
@property(nonatomic) int asyncLoadInfoScene; // @synthesize asyncLoadInfoScene=_asyncLoadInfoScene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)additionalUdfKVInfo;
- (id)initWithObjectUidList:(id)arg1 scenes:(id)arg2 commentScene:(int)arg3 config:(id)arg4 triggerScene:(int)arg5 location:(id)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)initWithObjectUidList:(id)arg1 scene:(int)arg2 commentScene:(int)arg3 config:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

