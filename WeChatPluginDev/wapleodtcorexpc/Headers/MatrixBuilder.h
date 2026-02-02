//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol MatrixPluginListenerDelegate;

@interface MatrixBuilder : NSObject
{
    id <MatrixPluginListenerDelegate> _pluginListener;
    NSMutableSet *_plugins;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *plugins; // @synthesize plugins=_plugins;
@property(nonatomic) __weak id <MatrixPluginListenerDelegate> pluginListener; // @synthesize pluginListener=_pluginListener;
- (id)getPlugins;
- (void)addPlugin:(id)arg1;
- (id)init;

@end

