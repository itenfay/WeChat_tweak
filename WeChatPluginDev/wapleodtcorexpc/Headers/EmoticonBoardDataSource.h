//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonBoardDataSource : NSObject
{
}

+ (id)getCameraEmoticonListWithNeedCheckImageExist:(_Bool)arg1;
+ (id)getCustomEmoticonListWithNeedCheckImageExist:(_Bool)arg1 andShowGameEmoticon:(_Bool)arg2;
+ (id)checkImageExistInEmoticonWrapArray:(id)arg1 abortOnFailure:(_Bool)arg2;
+ (id)getEmoticonListWithPid:(id)arg1 needCheckImageExist:(_Bool)arg2;
+ (id)getCustomOrCameraEmoticonListWithPageWrap:(id)arg1;
+ (id)getStoreEmoticonListWithPageWrap:(id)arg1;
+ (id)getEmoticonListWithPageWrap:(id)arg1;
+ (id)getIPEmoticonIPTipPageWrapWithPid:(id)arg1;
+ (id)getIPEmoticonPageWrapWithIPSetKey:(id)arg1;
+ (id)getCameraEmoticonPageWrapWithShowCameraEntry:(_Bool)arg1;
+ (id)getCustomEmoticonPageWrapWithShowCustomEntry:(_Bool)arg1 AndshowGameEmoticon:(_Bool)arg2;
+ (id)getStoreEmoticonPageWrapWithPackWrap:(id)arg1;
+ (id)getStoreEmoticonPageWrapWithRecommandItem:(id)arg1;
+ (id)tabItemFromRecommandItem:(id)arg1;
+ (id)tabItemFromPackWrap:(id)arg1;
+ (id)getTabRecommandItemsWithStickerPackages:(id)arg1 recommandMaxCount:(long long)arg2;
+ (id)getRecommandBoardDataWithRecommandItemArray:(id)arg1;
+ (id)getIPTipEmoticonBoardDataWithPackageArray:(id)arg1;
+ (id)getIPMergedEmoticonBoardDataWithPackageArray:(id)arg1;
+ (id)getEmoticonBoardDataWithPackageArray:(id)arg1 andCouldShowTip:(_Bool)arg2;

@end

