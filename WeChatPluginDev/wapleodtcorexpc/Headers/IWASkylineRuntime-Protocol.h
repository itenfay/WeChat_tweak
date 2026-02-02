//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSContext, WASkylineRuntimeInfo;
@protocol IWASkylineView, WASkylineRuntimeDelegate;

@protocol IWASkylineRuntime <NSObject>
@property(retain, nonatomic) WASkylineRuntimeInfo *runtimeInfo;
@property(readonly, nonatomic) _Bool isReady;
@property(nonatomic) __weak id <WASkylineRuntimeDelegate> delegate;
- (void)updateDarkMode:(_Bool)arg1 isDarkMode:(_Bool)arg2;
- (void)updateWindowViewport:(long long)arg1 size:(struct CGSize)arg2;
- (long long)getRuntimeHolderPtr;
- (void)sendJsContext:(JSContext *)arg1;
- (void)sendUITaskRunner:(id <IWASkylineView>)arg1;
- (double)destroyRuntime;
- (void)createRuntime;
@end

