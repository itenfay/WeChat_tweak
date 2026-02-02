//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface GCScrollViewObj : NSObject
{
    UIView *_scrollView;
    double _marginBottomInputView;
    double _initialBottom;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _getBottomCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getBottomCallback; // @synthesize getBottomCallback=_getBottomCallback;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) double initialBottom; // @synthesize initialBottom=_initialBottom;
@property(nonatomic) double marginBottomInputView; // @synthesize marginBottomInputView=_marginBottomInputView;
@property(retain, nonatomic) UIView *scrollView; // @synthesize scrollView=_scrollView;

@end

