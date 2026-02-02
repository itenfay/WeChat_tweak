//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIBezierPath;

@interface WCFinderMinimizeFloatingFrames : NSObject
{
    UIBezierPath *_minimizeBezierPath;
    struct CGRect _maximizeAnimatedViewFrame;
    struct CGRect _minimizeAnimatedViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBezierPath *minimizeBezierPath; // @synthesize minimizeBezierPath=_minimizeBezierPath;
@property(nonatomic) struct CGRect minimizeAnimatedViewFrame; // @synthesize minimizeAnimatedViewFrame=_minimizeAnimatedViewFrame;
@property(nonatomic) struct CGRect maximizeAnimatedViewFrame; // @synthesize maximizeAnimatedViewFrame=_maximizeAnimatedViewFrame;

@end

