//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterTextInputPlugin;

@interface FlutterTimerProxy : NSObject
{
    FlutterTextInputPlugin *_target;
}

+ (id)proxyWithTarget:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak FlutterTextInputPlugin *target; // @synthesize target=_target;
- (void)enableActiveViewAccessibility;

@end

