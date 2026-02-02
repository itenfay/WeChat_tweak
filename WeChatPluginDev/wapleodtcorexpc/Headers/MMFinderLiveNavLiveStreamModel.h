//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNavLiveStreamRequest, FinderNavLiveStreamResponse, WCFinderPrefetchCache;

@interface MMFinderLiveNavLiveStreamModel
{
    FinderNavLiveStreamResponse *_resp;
    WCFinderPrefetchCache *_prefetchCache;
    FinderNavLiveStreamRequest *_request;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderNavLiveStreamRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) WCFinderPrefetchCache *prefetchCache; // @synthesize prefetchCache=_prefetchCache;
@property(retain, nonatomic) FinderNavLiveStreamResponse *resp; // @synthesize resp=_resp;
- (_Bool)isValidToSaveToDataCache;
- (_Bool)enterPullUsePrefetchCache;

@end

