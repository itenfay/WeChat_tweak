//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandFlowListUtil : NSObject
{
}

+ (id)needSupplyUsrNamesWithModels:(id)arg1;
+ (_Bool)isNeedSupplyWithModels:(id)arg1;
+ (id)genNeedSupplyModelWithUsrName:(id)arg1;
+ (id)dataItemForExportId:(id)arg1 localResults:(id)arg2;
+ (id)convertExportIds2finderRequestIds:(id)arg1;
+ (void)batchGetFinderObjectsWithExportIdsIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)assignFeedContentVMForModels:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)convertJSApiImmerseItemList2BrandFlowListModel:(id)arg1;
+ (id)converFlowListItemData2BrandFlowListModel:(id)arg1;
+ (id)convertFlutterOpenParams2BrandFlowListModel:(id)arg1;
+ (int)finderGetCommentScene;
+ (void)preloadArticleDataIfNeededWithUrls:(id)arg1;

@end

