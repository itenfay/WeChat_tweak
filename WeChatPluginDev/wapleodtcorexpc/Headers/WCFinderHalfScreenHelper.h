//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderHalfScreenHelper : NSObject
{
}

+ (id)handleMiniAppEventVCWith:(id)arg1;
+ (void)bindHalfMiniStoreFromVC:(id)arg1 fromContentVM:(id)arg2 openParams:(id)arg3;
+ (void)bindHalfMiniAppFromVC:(id)arg1 fromContentVM:(id)arg2 openParams:(id)arg3 handlerWraper:(id)arg4;
+ (double)getHalfScreenHeightPercentByMediaWidHeightRatio:(double)arg1;
+ (_Bool)halfScreenIsDownByLastProgress:(double)arg1 curProgress:(double)arg2;
+ (_Bool)enableBindHalfByMediaSize:(struct CGSize)arg1;
+ (id)getBindCellModelFromVC:(id)arg1;
+ (id)getBindObjectModelFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (id)getBindObjectModelFromVC:(id)arg1;
+ (void)bindListenAnimProgressFromVC:(id)arg1 toHalfVC:(id)arg2;
+ (void)beginAnimatedWithCtx:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)setAnimatedCtx:(id)arg1;
+ (id)animatedCtx;

@end

