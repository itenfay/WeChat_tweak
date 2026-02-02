//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class YtSDKKitConfig;

@interface YtSDKKit : NSObject
{
    YtSDKKitConfig *_sdkConfig;
    long long _sdkMode;
    CDUnknownBlockType _processSucceedBlock;
    CDUnknownBlockType _processFailedBlock;
    CDUnknownBlockType _networkProcessBlock;
}

+ (void)clearInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType networkProcessBlock; // @synthesize networkProcessBlock=_networkProcessBlock;
@property(copy, nonatomic) CDUnknownBlockType processFailedBlock; // @synthesize processFailedBlock=_processFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType processSucceedBlock; // @synthesize processSucceedBlock=_processSucceedBlock;
@property(nonatomic) long long sdkMode; // @synthesize sdkMode=_sdkMode;
@property(nonatomic) YtSDKKitConfig *sdkConfig; // @synthesize sdkConfig=_sdkConfig;
- (CDUnknownBlockType)viewControllerJumpBlock;
- (id)getTargetViewController;
- (id)topViewController;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (void)setCompareImage:(id)arg1;
- (void)startProcessWithModeType:(long long)arg1 withProcessSucceedBlock:(CDUnknownBlockType)arg2 withProcessFailedBlock:(CDUnknownBlockType)arg3;
- (void)registerNetworkProcessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)fetchNetworkProcessBlock;
- (id)getSDKConfigBy:(long long)arg1;
- (id)getUIConfigBy:(long long)arg1;
- (int)loadSDKConfigWith:(id)arg1 withUIConfig:(id)arg2;
- (id)sdkVersion;

@end

