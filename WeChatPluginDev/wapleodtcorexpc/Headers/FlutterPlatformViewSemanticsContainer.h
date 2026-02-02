//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface FlutterPlatformViewSemanticsContainer
{
    UIView *_platformView;
}

@property(retain, nonatomic) UIView *platformView; // @synthesize platformView=_platformView;
- (id)nativeAccessibility;
- (void)dealloc;
- (id)initWithBridge:(WeakPtr_9998a1eb)arg1 uid:(int)arg2 platformView:(id)arg3;

@end

