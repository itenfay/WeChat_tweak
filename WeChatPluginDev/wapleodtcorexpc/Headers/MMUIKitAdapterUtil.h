//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMUIKitAdapterUtil : NSObject
{
}

+ (void)endIgnoringInteractionEvents;
+ (void)beginIgnoringInteractionEvents;
+ (_Bool)isIgnoringInteractionEvents;
+ (_Bool)statusBarHidden;
+ (long long)statusBarStyle;
+ (struct CGRect)statusBarFrame;
+ (id)keyWindow;
+ (void)enumerateWindowWithBlock:(CDUnknownBlockType)arg1;
+ (id)getFirstActiveWindowScene;

@end

