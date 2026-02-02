//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MatrixPluginConfig, NSString;
@protocol MatrixPluginListenerDelegate;

@interface MatrixPlugin : NSObject
{
    MatrixPluginConfig *pluginConfig;
    id <MatrixPluginListenerDelegate> _pluginListener;
}

+ (id)getTag;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MatrixPluginListenerDelegate> pluginListener; // @synthesize pluginListener=_pluginListener;
@property(retain, nonatomic) MatrixPluginConfig *pluginConfig; // @synthesize pluginConfig;
- (void)reportError:(id)arg1;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)reportIssue:(id)arg1;
- (void)destroy;
- (void)stop;
- (_Bool)start;
- (void)setupPluginListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

