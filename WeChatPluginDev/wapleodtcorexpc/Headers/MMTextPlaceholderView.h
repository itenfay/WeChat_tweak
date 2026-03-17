//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMTextPlaceholderView : UIView
{
    CDUnknownBlockType _drawRectAction;
}

@property(copy, nonatomic) CDUnknownBlockType drawRectAction; // @synthesize drawRectAction=_drawRectAction;
- (void)drawRect:(struct CGRect)arg1;

@end
