//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameHaowanOpenSDKUtils
{
}

+ (id)createViewControllerHandleMethod:(id)arg1 param:(id)arg2 appid:(id)arg3 extraInfoDict:(id)arg4 backToGameBlock:(CDUnknownBlockType)arg5;
+ (id)getViewControllerHandleMethod:(id)arg1 param:(id)arg2 appid:(id)arg3 extraInfoDict:(id)arg4 backToGameBlock:(CDUnknownBlockType)arg5;
+ (id)genPublishUrl:(id)arg1 from:(int)arg2 videoInfo:(id)arg3 gameInfo:(id)arg4;
+ (id)createWebViewController:(id)arg1 videoUrl:(id)arg2 thumbUrl:(id)arg3 source:(int)arg4 gameInfo:(id)arg5;
+ (id)buildUrlWithVideoInfo:(id)arg1 appId:(id)arg2 gameInfo:(id)arg3 source:(int)arg4;
+ (id)handleForVideoData:(id)arg1 needEdit:(_Bool)arg2 appId:(id)arg3 gameInfo:(id)arg4 source:(int)arg5 block:(CDUnknownBlockType)arg6 resultBlock:(CDUnknownBlockType)arg7;
+ (id)createViewControllerFromOpenSDKWithAppId:(id)arg1 andExtra:(id)arg2 andData:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end

