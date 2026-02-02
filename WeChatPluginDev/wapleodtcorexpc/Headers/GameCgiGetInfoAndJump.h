//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameItem, NSString, UIViewController;

@interface GameCgiGetInfoAndJump : NSObject
{
    int _fromType;
    NSString *_fromAppId;
    NSString *_fromUrl;
    NSString *_promotionId;
    UIViewController *_fromViewController;
    GameItem *_gameInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameItem *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) NSString *fromUrl; // @synthesize fromUrl=_fromUrl;
@property(retain, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
- (_Bool)analyzeBackColor:(id *)arg1 frontColor:(id *)arg2 fromUrl:(id)arg3 andParamColor:(id)arg4 andParamStyle:(id)arg5 isUseImmersiveUI:(_Bool *)arg6;
- (id)getWebViewController:(id)arg1 statusBarBgColor:(id)arg2 statusBarStyle:(id)arg3 toUrl:(id)arg4;
- (void)showAlert:(id)arg1;
- (void)reportPromotionId:(int)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)reportStartAction:(id)arg1;
- (void)openWebview:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)handleJumpInfo:(id)arg1 webviewInfo:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)openInWebview:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)openLiteApp:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)openAppStore:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)GetLaunchGameInfo:(id)arg1 promotionId:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (id)initWithType:(id)arg1 url:(id)arg2 type:(int)arg3 viewController:(id)arg4;

@end

