//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterBasicMessageChannel;

@interface MMFlutterAppForegroundState : NSObject
{
    FlutterBasicMessageChannel *_foregroundStateChannel;
}

- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)initWithMessenger:(id)arg1;

@end

