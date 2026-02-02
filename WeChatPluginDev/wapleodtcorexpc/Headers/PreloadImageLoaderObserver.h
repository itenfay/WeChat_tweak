//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppStore, NSMutableArray, NSString;

@interface PreloadImageLoaderObserver : NSObject
{
    NSMutableArray *_preloadImages;
    LiteAppStore *_store;
}

- (void).cxx_destruct;
- (void)OnImageLoad:(id)arg1 success:(_Bool)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)initWithPreloadImages:(id)arg1 store:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

