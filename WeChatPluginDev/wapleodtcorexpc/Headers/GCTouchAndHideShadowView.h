//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>
typedef void (^CDUnknownBlockType)(void);

@interface GCTouchAndHideShadowView : UIControl
{
    CDUnknownBlockType _onCloseBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onCloseBlock; // @synthesize onCloseBlock=_onCloseBlock;
- (void)removeSelf;
- (id)initWithFrame:(struct CGRect)arg1;

@end
