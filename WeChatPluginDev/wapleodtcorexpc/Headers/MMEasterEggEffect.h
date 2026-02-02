//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol MMEasterEggEffectDelegate;

@interface MMEasterEggEffect : NSObject
{
    NSString *_sessionId;
    NSString *_sceneId;
    id <MMEasterEggEffectDelegate> _delegate;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <MMEasterEggEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (_Bool)startEffectWithExtInfo:(id)arg1;
- (_Bool)isRunning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

