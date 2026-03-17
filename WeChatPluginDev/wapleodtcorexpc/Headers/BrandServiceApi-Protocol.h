//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandEcsProductCommentDetailItem, NSArray, NSString;

@protocol BrandServiceApi
- (void)gotoChattingWithLocalIdUnReadCnt:(long long)arg1 nativeLocalId:(long long)arg2 completion:(void (^)(FlutterError *))arg3;
- (void)getFinderLiveInfoExportIdList:(NSArray *)arg1 completion:(void (^)(NSArray *, FlutterError *))arg2;
- (void)shareEcsProductCommentDetailItem:(BrandEcsProductCommentDetailItem *)arg1 error:(id *)arg2;
- (void)quickShareEcsProductCommentDetailItem:(BrandEcsProductCommentDetailItem *)arg1 toUser:(NSString *)arg2 error:(id *)arg3;
- (void)fetchBEcsStrategyWithError:(id *)arg1;
- (void)gotoMyNotiListSource:(long long)arg1 error:(id *)arg2;
- (void)gotoMyFollowBrandServiceListSource:(long long)arg1 error:(id *)arg2;
- (void)getRecentBrandServiceInfoLimit:(long long)arg1 completion:(void (^)(NSArray *, FlutterError *))arg2;
@end

