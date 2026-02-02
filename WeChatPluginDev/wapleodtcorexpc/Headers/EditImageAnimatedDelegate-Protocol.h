//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAnimatedWidgetTool;

@protocol EditImageAnimatedDelegate <NSObject>

@optional
- (_Bool)startEditingTextWithAnimatedWidgetTool:(EditImageAnimatedWidgetTool *)arg1;
- (struct CGRect)deleteArea;
- (void)adjustEditImageAnimatedWidgetTool:(EditImageAnimatedWidgetTool *)arg1;
@end

