//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderDynamicIconFetchConfig;

@interface WCFinderDynamicIconFetchSingleTask
{
    WCFinderDynamicIconFetchConfig *_config;
    NSString *_dynamicKey;
}

+ (void)saveSVGData:(id)arg1 urlString:(id)arg2;
+ (id)taskWithConfig:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dynamicKey; // @synthesize dynamicKey=_dynamicKey;
@property(retain, nonatomic) WCFinderDynamicIconFetchConfig *config; // @synthesize config=_config;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (_Bool)isFinish;
- (id)imageWithSVGData:(id)arg1;
- (id)renderNormalImage:(id)arg1;
- (id)imageFromData:(id)arg1 isSVG:(_Bool *)arg2;
- (id)loadCacheImage;
- (void)startProcess;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

