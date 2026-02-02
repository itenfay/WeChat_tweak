//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FavoritesCommonUtil : NSObject
{
}

+ (_Bool)SelectCanvasFavItem:(id)arg1 FromViewController:(id)arg2 thumbView:(id)arg3 showNavigationBar:(_Bool)arg4 TimeIntervalToOpen:(unsigned int)arg5 SearchTagScene:(unsigned int)arg6;
+ (_Bool)SelectCanvasFavItem:(id)arg1 FromViewController:(id)arg2 thumbView:(id)arg3 TimeIntervalToOpen:(unsigned int)arg4 SearchTagScene:(unsigned int)arg5;
+ (void)selectFileData:(id)arg1 FromViewController:(id)arg2;
+ (void)selectLocationData:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (void)internalOpenFavDataTypeWebPage:(id)arg1 fromViewController:(id)arg2 targetUrl:(id)arg3;
+ (void)SelectFavDataItemWrap:(id)arg1 FromViewController:(id)arg2 thumbImageView:(id)arg3 Delegate:(id)arg4;
+ (void)SelectFavDataItemWrap:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3;
+ (id)genNodeContentView:(id)arg1;
+ (_Bool)goToWSVideoFlowPageWithFavoritesUrlItem:(id)arg1 fromViewController:(id)arg2;
+ (_Bool)goToMPShareVideoPageWithFavoritesUrlItem:(id)arg1 targetUrl:(id)arg2 fromViewController:(id)arg3;
+ (void)openBrandMpVideoByFavItem:(id)arg1 dataField:(id)arg2 fromViewController:(id)arg3 thumbView:(id)arg4;
+ (_Bool)openTingList:(id)arg1 fromViewController:(id)arg2;
+ (_Bool)openTingListWithFavItem:(id)arg1 fromViewController:(id)arg2;
+ (_Bool)openTingAudio:(id)arg1 fromViewController:(id)arg2;
+ (_Bool)openTingAudioWithFavItem:(id)arg1 fromViewController:(id)arg2;
+ (_Bool)_openTingAudio:(id)arg1 favItem:(id)arg2 favData:(id)arg3 fromViewController:(id)arg4;
+ (void)openMusicDataWrap:(id)arg1 fromViewController:(id)arg2;
+ (_Bool)openMusicItem:(id)arg1 fromViewController:(id)arg2;
+ (void)playTingItem:(id)arg1 withOptions:(id)arg2 fromViewController:(id)arg3;
+ (unsigned long long)internalOpenFavDataTypeWebPageWithReturnValue:(id)arg1 fromViewController:(id)arg2 targetUrl:(id)arg3;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6 thumbView:(id)arg7 TimeIntervalToOpen:(unsigned int)arg8 SearchTagScene:(unsigned int)arg9;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6 thumbView:(id)arg7;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3 thumbView:(id)arg4 TimeIntervalToOpen:(unsigned int)arg5 SearchTagScene:(unsigned int)arg6;
+ (_Bool)SelectFavItem:(id)arg1 FromViewController:(id)arg2 Delegate:(id)arg3 TimeIntervalToOpen:(unsigned int)arg4 SearchTagScene:(unsigned int)arg5;
+ (void)sortArrFavData:(id)arg1;

@end

