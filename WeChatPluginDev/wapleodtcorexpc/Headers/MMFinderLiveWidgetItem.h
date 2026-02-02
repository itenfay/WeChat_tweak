//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface MMFinderLiveWidgetItem : NSObject
{
    _Bool _alwaysAtLast;
    _Bool _hideWhenConnectMic;
    double _leadForEnterAnimation;
    UIView *_view;
    double _prepareToNormalStateDuration;
    CDUnknownBlockType _prepareWeaken;
    CDUnknownBlockType _enterCallback;
    CDUnknownBlockType _changeStateCallback;
    CDUnknownBlockType _changeToEnterStateCallbackForLayoutStyleChange;
    CDUnknownBlockType _changeToNormalStateCallbackForLayoutStyleChange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType changeToNormalStateCallbackForLayoutStyleChange; // @synthesize changeToNormalStateCallbackForLayoutStyleChange=_changeToNormalStateCallbackForLayoutStyleChange;
@property(copy, nonatomic) CDUnknownBlockType changeToEnterStateCallbackForLayoutStyleChange; // @synthesize changeToEnterStateCallbackForLayoutStyleChange=_changeToEnterStateCallbackForLayoutStyleChange;
@property(copy, nonatomic) CDUnknownBlockType changeStateCallback; // @synthesize changeStateCallback=_changeStateCallback;
@property(copy, nonatomic) CDUnknownBlockType enterCallback; // @synthesize enterCallback=_enterCallback;
@property(copy, nonatomic) CDUnknownBlockType prepareWeaken; // @synthesize prepareWeaken=_prepareWeaken;
@property(nonatomic) double prepareToNormalStateDuration; // @synthesize prepareToNormalStateDuration=_prepareToNormalStateDuration;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) double leadForEnterAnimation; // @synthesize leadForEnterAnimation=_leadForEnterAnimation;
@property(nonatomic) _Bool hideWhenConnectMic; // @synthesize hideWhenConnectMic=_hideWhenConnectMic;
@property(nonatomic) _Bool alwaysAtLast; // @synthesize alwaysAtLast=_alwaysAtLast;

@end

