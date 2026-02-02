//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable, YYWKSchemeGuardModel;

@interface YYWKSchemeGuardManager : NSObject
{
    _Bool _ignoreGuardCheck;
    YYWKSchemeGuardModel *_guardModel;
    NSMapTable *_visibleWebViewStateTable;
}

+ (double)getValueForKey:(id)arg1 defaultValue:(double)arg2;
+ (id)sharedCustomUrlCache;
+ (id)getSharedUrlCache;
+ (id)getAvailableCapacityControl;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *visibleWebViewStateTable; // @synthesize visibleWebViewStateTable=_visibleWebViewStateTable;
@property(retain, nonatomic) YYWKSchemeGuardModel *guardModel; // @synthesize guardModel=_guardModel;
@property(nonatomic) _Bool ignoreGuardCheck; // @synthesize ignoreGuardCheck=_ignoreGuardCheck;
- (void)syncToKV;
- (void)report;
- (void)syncAndReport;
- (id)anyVisibleSchemeGameWkWebView;
- (void)handleWebView:(id)arg1 state:(unsigned long long)arg2;
- (_Bool)isSchemeWKGameWebView:(id)arg1;
- (_Bool)isWebViewGameHost:(id)arg1;
- (void)markRegisterSchemeFailed;
- (void)markEnableCustomSchemeFailed;
- (void)markNonGameHostRequest:(id)arg1;
- (void)checkRequest:(id)arg1;
- (void)checkLastCrash;
- (_Bool)canUseHttpScheme;
- (void)clearGuardModel;
- (id)modelJsonStr;
- (id)guardModelFromKV;
- (id)init;

@end

