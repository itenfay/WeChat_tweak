//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIIndirectScribbleInteraction;
@protocol NSCopying><NSObject;

@protocol UIIndirectScribbleInteractionDelegate <NSObject>
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 focusElementIfNeeded:(id <NSCopying><NSObject>)arg2 referencePoint:(struct CGPoint)arg3 completion:(void (^)(UIResponder<UITextInput> *))arg4;
- (struct CGRect)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 frameForElement:(id <NSCopying><NSObject>)arg2;
- (_Bool)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 isElementFocused:(id <NSCopying><NSObject>)arg2;
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(void (^)(NSArray *))arg3;

@optional
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 didFinishWritingInElement:(id <NSCopying><NSObject>)arg2;
- (void)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 willBeginWritingInElement:(id <NSCopying><NSObject>)arg2;
- (_Bool)indirectScribbleInteraction:(UIIndirectScribbleInteraction *)arg1 shouldDelayFocusForElement:(id <NSCopying><NSObject>)arg2;
@end

