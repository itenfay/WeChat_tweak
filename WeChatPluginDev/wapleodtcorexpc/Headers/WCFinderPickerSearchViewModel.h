//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedPickerParams;

@interface WCFinderPickerSearchViewModel
{
    WCFinderFeedPickerParams *_params;
    NSString *_udfKVStr;
    NSString *_latestQueryText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(copy, nonatomic) NSString *udfKVStr; // @synthesize udfKVStr=_udfKVStr;
@property(retain, nonatomic) WCFinderFeedPickerParams *params; // @synthesize params=_params;
- (void)report22878DataWithFeedID:(id)arg1 feedPos:(long long)arg2 isClickAction:(_Bool)arg3 isVideoFeed:(_Bool)arg4;
- (id)getCustomUdfKvJsonStr;
- (void)onQueryNextPageDataItem;
- (void)queryContactWith:(id)arg1;
- (int)searchSceneFromPickerScene:(int)arg1;

@end

