//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFeedExposureItem
{
    _Bool _isFold;
    unsigned int _uiCreateTime;
    unsigned int _uiCount;
    NSString *_nsFeedId;
    NSString *_appId;
}

+ (void)initialize;
+ (void)PBArrayAdd_isFold;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_uiCount;
+ (void)PBArrayAdd_uiCreateTime;
+ (void)PBArrayAdd_nsFeedId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) unsigned int uiCount; // @synthesize uiCount=_uiCount;
@property(nonatomic) unsigned int uiCreateTime; // @synthesize uiCreateTime=_uiCreateTime;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *nsFeedId; // @synthesize nsFeedId=_nsFeedId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

