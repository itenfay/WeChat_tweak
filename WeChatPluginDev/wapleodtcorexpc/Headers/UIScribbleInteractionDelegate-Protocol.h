//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScribbleInteraction;

@protocol UIScribbleInteractionDelegate <NSObject>

@optional
- (void)scribbleInteractionDidFinishWriting:(UIScribbleInteraction *)arg1;
- (void)scribbleInteractionWillBeginWriting:(UIScribbleInteraction *)arg1;
- (_Bool)scribbleInteractionShouldDelayFocus:(UIScribbleInteraction *)arg1;
- (_Bool)scribbleInteraction:(UIScribbleInteraction *)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
@end

