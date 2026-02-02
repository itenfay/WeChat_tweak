//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingCgiManager : NSObject
{
}

+ (void)fetchMusicPlayItemWithListenId:(id)arg1 forceUpdate:(_Bool)arg2 needEncrypt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)dislikeWithListenId:(id)arg1 andCategoryId:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fetchListenItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchCategoryOrAlbumById:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchNewDiscoverItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)modifyListenLaterStatusWithItem:(id)arg1 isListenLater:(_Bool)arg2 scene:(int)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)likeOp:(_Bool)arg1 scene:(int)arg2 isPublic:(_Bool)arg3 item:(id)arg4 categoryItem:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)likeOp:(_Bool)arg1 scene:(int)arg2 item:(id)arg3 categoryItem:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)likeReportBy28683WithScene:(int)arg1 listenId:(id)arg2 like:(_Bool)arg3;
+ (void)likeOp:(_Bool)arg1 scene:(int)arg2 isPublic:(_Bool)arg3 listenId:(id)arg4 categoryId:(id)arg5 type:(int)arg6 finderFeedId:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)likeOp:(_Bool)arg1 scene:(int)arg2 isPublic:(_Bool)arg3 listenId:(id)arg4 categoryId:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)likeOp:(_Bool)arg1 scene:(int)arg2 listenId:(id)arg3 type:(int)arg4 finderFeedId:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)likeOp:(_Bool)arg1 scene:(int)arg2 listenId:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

