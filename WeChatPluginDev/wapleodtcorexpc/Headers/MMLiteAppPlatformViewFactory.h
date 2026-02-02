//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppPlatformViewPlugin, NSMapTable, NSString;

@interface MMLiteAppPlatformViewFactory : NSObject
{
    MMLiteAppPlatformViewPlugin *_plugin;
    NSMapTable *_viewMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *viewMap; // @synthesize viewMap=_viewMap;
@property(nonatomic) __weak MMLiteAppPlatformViewPlugin *plugin; // @synthesize plugin=_plugin;
- (id)createArgsCodec;
- (id)createWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

