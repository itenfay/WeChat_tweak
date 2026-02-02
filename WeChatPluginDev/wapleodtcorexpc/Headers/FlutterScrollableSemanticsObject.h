//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterSemanticsScrollView;

@interface FlutterScrollableSemanticsObject
{
    FlutterSemanticsScrollView *_scrollView;
}

@property(retain, nonatomic) FlutterSemanticsScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (struct CGPoint)contentOffsetInternal;
- (struct CGSize)contentSizeInternal;
- (float)scrollPosition;
- (float)scrollExtentMax;
- (id)nativeAccessibility;
- (void)accessibilityBridgeDidFinishUpdate;
- (void)dealloc;
- (id)initWithBridge:(WeakPtr_9998a1eb)arg1 uid:(int)arg2;

@end

