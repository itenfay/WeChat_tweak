//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSString, UIView;

@interface GameAddSubViewHookConfig : NSObject
{
    _Bool _enableHook;
    NSString *_hookClsName;
    double _delaySeconds;
    double _top;
    UIView *_shadowView;
    CADisplayLink *_displayLink;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool enableHook; // @synthesize enableHook=_enableHook;
@property(nonatomic) double top; // @synthesize top=_top;
@property(nonatomic) double delaySeconds; // @synthesize delaySeconds=_delaySeconds;
@property(retain, nonatomic) NSString *hookClsName; // @synthesize hookClsName=_hookClsName;

@end

