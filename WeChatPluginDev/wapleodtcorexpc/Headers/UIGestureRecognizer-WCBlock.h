//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIGestureRecognizer.h>

@interface UIGestureRecognizer (WCBlock)
+ (void)hookUIGestureRecognizer;
+ (id)recognizerWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)swizzle_isEnabled;
@property(nonatomic) _Bool forceDisable;
- (id)getStateDesc;
@property(copy, nonatomic, setter=setHandler:) CDUnknownBlockType handler;
- (void)handleAction:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
@end

