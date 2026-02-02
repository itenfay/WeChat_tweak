//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderHalfScreenFlutterAPI, NSArray, NSString;
@protocol WCFinderFlutterHalfScreenPluginDelegate;

@interface WCFinderFlutterHalfScreenPlugin : NSObject
{
    _Bool _preventDrag;
    id <WCFinderFlutterHalfScreenPluginDelegate> _delegate;
    FinderHalfScreenFlutterAPI *_flutterAPI;
    NSArray *_preventDragAreas;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *preventDragAreas; // @synthesize preventDragAreas=_preventDragAreas;
@property(nonatomic) _Bool preventDrag; // @synthesize preventDrag=_preventDrag;
@property(retain, nonatomic) FinderHalfScreenFlutterAPI *flutterAPI; // @synthesize flutterAPI=_flutterAPI;
@property(nonatomic) __weak id <WCFinderFlutterHalfScreenPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updatePreventDragAreaAreas:(id)arg1 error:(id *)arg2;
- (void)updateDragPreventStatePrevent:(_Bool)arg1 error:(id *)arg2;
- (void)updateHalfScreenContentHeightHeight:(double)arg1 error:(id *)arg2;
- (void)cancelHalfScreenAnimated:(_Bool)arg1 error:(id *)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (_Bool)dragGesShouldBeginWithTouchLocation:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

