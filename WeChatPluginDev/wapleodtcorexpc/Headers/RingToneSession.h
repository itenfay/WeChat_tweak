//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RingToneSession : NSObject
{
}

+ (id)SendRingBackToListen:(id)arg1 cliMinSeq:(unsigned long long)arg2 totalScanRingBackCount:(unsigned long long)arg3 totalSendRingBackCount:(unsigned long long)arg4 categoryID:(id)arg5;
+ (id)RingBackSearchWordSuggest:(id)arg1;
+ (id)genRingSearchUDF:(unsigned int)arg1;
+ (id)genRingTongExpParamFromClientPB:(unsigned int)arg1 isNewVersion:(unsigned int)arg2;
+ (void)prefetchDataForCell:(id)arg1;
+ (id)searchMusicRingWithQuery:(id)arg1 offset:(unsigned int)arg2 searchID:(unsigned long long)arg3;
+ (id)getReportExtraInfo:(id)arg1 position:(long long)arg2 searchID:(unsigned long long)arg3;
+ (unsigned long long)getRingToneSetType:(id)arg1;
+ (void)finderAuthorPage:(id)arg1 ring:(id)arg2 userName:(id)arg3;
+ (void)jumpToAuthorPage:(id)arg1 ring:(id)arg2;
+ (void)jumpToFinderPlayer:(id)arg1 ring:(id)arg2 userName:(id)arg3 pageSheetFlag:(unsigned long long)arg4 extraInfo:(id)arg5;
+ (id)genRingBackDetailSubRequestPB:(id)arg1;
+ (id)GetRingBackDetailByFinderItem:(id)arg1;
+ (id)ReportRingBackForRecommend:(id)arg1;
+ (id)fetchRecommendRingsWithOffset:(unsigned int)arg1 ring:(id)arg2 pullType:(unsigned long long)arg3;
+ (id)setupRingToneWithType:(unsigned long long)arg1 ring:(id)arg2 userName:(id)arg3 op:(unsigned long long)arg4 scene:(unsigned long long)arg5;
+ (void)finderFeedContentVMWithRing:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)deleteHistoryRing:(id)arg1;
+ (id)clearHistoryRings;
+ (id)fetchHistoryRingsWithSeq:(unsigned long long)arg1;
+ (id)fillUpFinderItemWithRing:(id)arg1 useCache:(_Bool)arg2;

@end

