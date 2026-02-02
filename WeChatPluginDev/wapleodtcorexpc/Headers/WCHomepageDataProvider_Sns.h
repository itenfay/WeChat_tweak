//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCHomePageDataProviderDelegate, WCHomePageDataProviderStarDelegate;

@interface WCHomepageDataProvider_Sns
{
    NSString *fpHash;
    _Bool isWorking;
    NSString *jumpToItemId;
    id <WCHomePageDataProviderDelegate> delegate;
    NSString *username;
    id <WCHomePageDataProviderStarDelegate> _starDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCHomePageDataProviderStarDelegate> starDelegate; // @synthesize starDelegate=_starDelegate;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) __weak id <WCHomePageDataProviderDelegate> delegate; // @synthesize delegate;
- (void)updateDragon2024InfoFromResponse:(id)arg1 byRequest:(id)arg2;
- (void)updateStarListFromResponse:(id)arg1 byRequest:(id)arg2;
- (void)procssCgiFailResponse:(id)arg1;
- (void)procssCgiSuccessResponse:(id)arg1 request:(id)arg2;
- (void)startCgiRequest:(id)arg1;
- (long long)responseRetCode2HomePageRetCode:(int)arg1;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3 filterType:(unsigned int)arg4 username:(id)arg5;
- (void)requestForSnsMediaHomepageWithDataType:(unsigned int)arg1 maxID:(id)arg2 minID:(id)arg3 source:(long long)arg4;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(long long)arg3;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2 filterType:(unsigned int)arg3 username:(id)arg4 pullType:(unsigned int)arg5;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2 filterType:(unsigned int)arg3 username:(id)arg4;
- (void)requestForSnsMediaHomepageWithDataType:(unsigned int)arg1 maxID:(id)arg2 source:(long long)arg3;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(long long)arg2;
- (id)converListToList:(id)arg1;
- (void)forceUpdateMediaWithDataType:(unsigned int)arg1 referID:(id)arg2;
- (void)updatePrePage:(id)arg1;
- (void)updateMediaWithDataType:(unsigned int)arg1 referID:(id)arg2 bottomID:(id)arg3;
- (void)updateMediaWithDataType:(unsigned int)arg1 referID:(id)arg2;
- (void)fetchDataBeforeJumpToItemId:(id)arg1;
- (void)forceUpdateWithReferID:(id)arg1;
- (void)updateHeadWithSource:(long long)arg1;
- (void)updateWithReferID:(id)arg1 bottomID:(id)arg2;
- (void)updateWithReferID:(id)arg1;

@end

