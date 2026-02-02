//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveRewardGiftUtil : NSObject
{
}

+ (unsigned long long)getResourceMemoryCacheOptionsForRewardItem:(id)arg1 extra:(id)arg2;
+ (unsigned long long)getResourceMemoryCacheOptionsForRewardItem:(id)arg1;
+ (void)extractAnimationPagMd5:(id *)arg1 animationPagUrl:(id *)arg2 fromRewardItem:(id)arg3 extra:(id)arg4;
+ (void)extractPreviewPagMd5:(id *)arg1 previewPagUrl:(id *)arg2 fromRewardItem:(id)arg3 extra:(id)arg4;
+ (void)extractPreviewPagMd5:(id *)arg1 previewPagUrl:(id *)arg2 fromRewardItem:(id)arg3;
+ (void)extractThumbnailMd5:(id *)arg1 thumbnailUrl:(id *)arg2 fromRewardItem:(id)arg3 extra:(id)arg4;
+ (void)extractThumbnailMd5:(id *)arg1 thumbnailUrl:(id *)arg2 fromRewardItem:(id)arg3;
+ (void)extractResourceId:(id *)arg1 fromRewardItem:(id)arg2 extra:(id)arg3;
+ (void)extractResourceId:(id *)arg1 fromRewardItem:(id)arg2;
+ (id)getCustomizeRewardItem:(id)arg1 extra:(id)arg2;
+ (id)getThumbailSrcWithProductId:(id)arg1 md5:(id)arg2 targetUrl:(id)arg3;

@end

