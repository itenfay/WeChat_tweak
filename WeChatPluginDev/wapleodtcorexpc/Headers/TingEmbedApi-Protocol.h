//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderProfileReportParams, FlutterStandardTypedData, NSString, OpenTingPageParams;

@protocol TingEmbedApi
- (void)openTingPageWithNewEngineRouteName:(NSString *)arg1 params:(OpenTingPageParams *)arg2 error:(id *)arg3;
- (void)openTingPagePageUrl:(NSString *)arg1 pageParams:(OpenTingPageParams *)arg2 error:(id *)arg3;
- (FinderProfileReportParams *)getFinderProfileDynamicReportParamsWithError:(id *)arg1;
- (void)openCategoryItemCategoryItem:(FlutterStandardTypedData *)arg1 recommendBuffer:(FlutterStandardTypedData *)arg2 scene:(long long)arg3 error:(id *)arg4;
- (void)openFinderDiscoverDiscoverLineData:(FlutterStandardTypedData *)arg1 finderUsername:(NSString *)arg2 sessionBuff:(FlutterStandardTypedData *)arg3 error:(id *)arg4;
@end

