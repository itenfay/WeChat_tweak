//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSString, UINavigationController;

@protocol WCFinderProfileStickerTabPageModelDelegate <MMUIViewControllerDelegate>

@optional
- (NSString *)enterTimeStr;
- (unsigned long long)sdkPageID;
- (NSString *)sdkPageName;
- (NSString *)sdkRequestID;
- (void)emotionTabPageModelGotDataChangeAndNeedReload;
- (void)emotionTabPageModelFetchFailedForType:(unsigned long long)arg1;
- (void)emotionTabPageModelFetchDoneForType:(unsigned long long)arg1 andHasMore:(_Bool)arg2;
- (UINavigationController *)getNavController;
- (void)emotionTabPageModelFirstPageDataLoadFinish:(_Bool)arg1;
@end

