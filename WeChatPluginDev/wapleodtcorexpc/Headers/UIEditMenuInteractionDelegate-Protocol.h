//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UIEditMenuConfiguration, UIEditMenuInteraction, UIMenu;
@protocol UIEditMenuInteractionAnimating;

@protocol UIEditMenuInteractionDelegate <NSObject>

@optional
- (void)editMenuInteraction:(UIEditMenuInteraction *)arg1 willDismissMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (void)editMenuInteraction:(UIEditMenuInteraction *)arg1 willPresentMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (struct CGRect)editMenuInteraction:(UIEditMenuInteraction *)arg1 targetRectForConfiguration:(UIEditMenuConfiguration *)arg2;
- (UIMenu *)editMenuInteraction:(UIEditMenuInteraction *)arg1 menuForConfiguration:(UIEditMenuConfiguration *)arg2 suggestedActions:(NSArray *)arg3;
@end

