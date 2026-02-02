//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderProfileFeedHelper : NSObject
{
}

+ (void)checkFinderSwitch:(CDUnknownBlockType)arg1;
+ (void)goCollectionFeedListWithDataFetcher:(id)arg1 destinationFeedID:(id)arg2 autoPresentCollectionHalfScreen:(_Bool)arg3 username:(id)arg4 fromVC:(id)arg5 complete:(CDUnknownBlockType)arg6;
+ (void)onClickFeedCollection:(id)arg1 fromVC:(id)arg2 username:(id)arg3 justWatchItem:(id)arg4 complete:(CDUnknownBlockType)arg5;
+ (id)findCellWithTid:(id)arg1 inCollectionView:(id)arg2 indexPath:(id *)arg3;
+ (id)cellForContentVM:(id)arg1 inCollectionView:(id)arg2 indexPath:(id)arg3 fullScreen:(_Bool)arg4 useStreamCell:(_Bool)arg5 justWatchInfo:(id)arg6 halfScreen:(_Bool)arg7 hiddenSticker:(_Bool)arg8 useFullCover:(_Bool)arg9 coverCost:(id)arg10;
+ (id)cellConfigForContentVM:(id)arg1 fullScreen:(_Bool)arg2 useStreamCell:(_Bool)arg3 justWatchInfo:(id)arg4 halfScreen:(_Bool)arg5 hiddenSticker:(_Bool)arg6 useFullCover:(_Bool)arg7;

@end

