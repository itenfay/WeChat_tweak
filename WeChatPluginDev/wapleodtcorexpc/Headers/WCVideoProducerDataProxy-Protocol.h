//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVideoTemplate, MMAssetInfo, NSArray, NSString, OMJMusicInfo;

@protocol WCVideoProducerDataProxy <NSObject>
- (void)removeAllRecommendMusics;
- (void)removeAllSearchMusics;
- (void)insertUniqueSearchMusic:(OMJMusicInfo *)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)removeExtRecommendTemplateById:(NSString *)arg1;
- (void)removeAllStubTemplates;
- (_Bool)addPickOutTemplate:(MJVideoTemplate *)arg1;
- (MJVideoTemplate *)findTemplateById:(NSString *)arg1;
- (MMAssetInfo *)findAssetInfoByFilePath:(NSString *)arg1;
- (MMAssetInfo *)findAssetInfoByLocalIdentifier:(NSString *)arg1;
- (NSArray *)getInputAssetIdList;
- (NSArray *)getInputAssetInfoList;
- (NSArray *)getExtRecommendMusicInfoListWithTemplateID:(NSString *)arg1;
- (NSArray *)getSearchMusicList;
- (NSArray *)getRecommendMusicList;
- (NSArray *)getPickOutTemplateList;
- (NSArray *)getExtRecommendTemplateList;
- (NSArray *)getRecommendTemplateList;
- (NSArray *)getFolderTemplateList;
- (NSArray *)getLauncherTemplateList;
- (NSArray *)getStubTemplateList;
- (NSArray *)getCreateSameTemplateList;
- (NSArray *)getDefaultTemplateList;
@end

