//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol HeroInteractiveTransitionPage <NSObject>
- (unsigned long long)interactiveTransitionType;
- (NSArray *)animatableViews;

@optional
- (void)onEndInteractivePop:(_Bool)arg1;
- (void)onStartInteractivePop;
@end

