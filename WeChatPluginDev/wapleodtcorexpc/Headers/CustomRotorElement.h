//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>
typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface CustomRotorElement : UIControl
{
    int _index;
    NSString *_nsUrl;
    CDUnknownBlockType _handler;
    struct CGRect _myFrame;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) struct CGRect myFrame; // @synthesize myFrame=_myFrame;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(nonatomic) int index; // @synthesize index=_index;
- (_Bool)accessibilityActivate;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;

@end
