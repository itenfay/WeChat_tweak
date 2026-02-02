//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderStreamProfileHeadData;
@protocol WCFinderStreamProfilePluginDelegate;

@interface WCFinderStreamProfilePluginBase : NSObject
{
    WCFinderStreamProfileHeadData *_headData;
    id <WCFinderStreamProfilePluginDelegate> _pluginDelegate;
}

+ (_Bool)pluginEnable:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderStreamProfilePluginDelegate> pluginDelegate; // @synthesize pluginDelegate=_pluginDelegate;
@property(retain, nonatomic) WCFinderStreamProfileHeadData *headData; // @synthesize headData=_headData;
- (void)onFetchDataFinish:(_Bool)arg1 cgiProfile:(id)arg2;
- (void)updateOverviewSection:(long long)arg1 necessary:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)requestPageData;
- (void)doLoadCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

