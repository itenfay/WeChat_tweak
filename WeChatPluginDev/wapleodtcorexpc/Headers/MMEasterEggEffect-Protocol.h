//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol MMEasterEggEffectDelegate;

@protocol MMEasterEggEffect <NSObject>
@property(retain, nonatomic) UIView *backgroundView;
@property(retain, nonatomic) NSString *sceneId;
@property(retain, nonatomic) NSString *sessionId;
@property(nonatomic) __weak id <MMEasterEggEffectDelegate> delegate;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (_Bool)startEffectWithExtInfo:(NSString *)arg1;
- (_Bool)isRunning;
@end

