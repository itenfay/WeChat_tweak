//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderVideoPlayerHelper : NSObject
{
}

+ (double)CalculateVideoDisplayFrame:(id)arg1 containerSize:(struct CGSize)arg2 isSubScene:(_Bool)arg3;
+ (void)createPlayerViewWithFeedContentVM:(id)arg1 size:(struct CGSize)arg2 controller:(id)arg3 playerView:(id *)arg4;
+ (void)createPlayerViewWithFeedContentVM:(id)arg1 size:(struct CGSize)arg2 controllerGenerator:(CDUnknownBlockType)arg3 playerView:(id *)arg4;
+ (void)updatePlayerPreloadInfo:(id)arg1 playerView:(id)arg2;

@end

