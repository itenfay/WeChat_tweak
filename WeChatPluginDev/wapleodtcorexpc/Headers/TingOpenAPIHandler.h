//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TingOpenAPIHandler
{
}

+ (void)openProfileFromJSAPIWithParam:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (unsigned long long)eventFromEngineEventValue:(unsigned long long)arg1;
+ (void)__handleCategoryEvent:(id)arg1 categoryItem:(id)arg2 params:(id)arg3;
+ (void)showAddAlbumBottomToastInView:(id)arg1 scene:(int)arg2 WithClickAction:(CDUnknownBlockType)arg3;
+ (_Bool)operateTingItemInCurrentNav:(id)arg1 params:(id)arg2;
+ (void)playWithCategoryId:(id)arg1 scene:(int)arg2 callBack:(CDUnknownBlockType)arg3;
+ (_Bool)__checkCategoryItemValid:(id)arg1 errMsg:(id *)arg2;
+ (void)__doOpenCategory:(id)arg1 scene:(int)arg2 navigationController:(id)arg3;
+ (void)openCategoryItem:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)openCategoryItemWithCategoryId:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)openCategoryFromJSAPIWithParam:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(CDUnknownBlockType)arg4;
+ (void)openTingViewFromJSAPIWithParam:(id)arg1 scene:(int)arg2 navigationController:(id)arg3 callBack:(CDUnknownBlockType)arg4;

@end

