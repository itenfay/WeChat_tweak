//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCFinderLiveStreamGetAsyncLoadInfoCGI
{
    int _triggerScene;
    long long _reportScene;
    NSArray *_scenesArray;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSArray *scenesArray; // @synthesize scenesArray=_scenesArray;
@property(nonatomic) long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) int triggerScene; // @synthesize triggerScene=_triggerScene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithObjectUidList:(id)arg1 aggregationCardIdList:(id)arg2 cardInfoList:(id)arg3 scenes:(id)arg4 commentScene:(int)arg5 triggerScene:(int)arg6 reportScene:(long long)arg7 successful:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;

@end

