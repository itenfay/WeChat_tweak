//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>
typedef void (^CDUnknownBlockType)(void);

@interface WNAccessibilityMenuElement : UIAccessibilityElement
{
    CDUnknownBlockType _handle;
}

@property(copy, nonatomic) CDUnknownBlockType handle; // @synthesize handle=_handle;
- (_Bool)accessibilityActivate;

@end
