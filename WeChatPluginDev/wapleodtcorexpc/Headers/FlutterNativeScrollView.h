//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSString, UIView;

@interface FlutterNativeScrollView : UIScrollView
{
    CDUnknownBlockType _offsetCallback;
    UIView *_flutterView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *flutterView; // @synthesize flutterView=_flutterView;
@property(copy, nonatomic) CDUnknownBlockType offsetCallback; // @synthesize offsetCallback=_offsetCallback;
- (void)sendSubviewToBack:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffsetCallback:(CDUnknownBlockType)arg1;
- (void)attachFlutterView:(id)arg1;
- (void)dealloc;
- (void)setContentOffset:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

