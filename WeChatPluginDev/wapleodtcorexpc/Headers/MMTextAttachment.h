//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/NSTextAttachment.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMTextAttachment : NSTextAttachment
{
    CDUnknownBlockType _onAccessibilityActivate;
}

@property(copy, nonatomic) CDUnknownBlockType onAccessibilityActivate; // @synthesize onAccessibilityActivate=_onAccessibilityActivate;
- (_Bool)accessibilityActivate;

@end
