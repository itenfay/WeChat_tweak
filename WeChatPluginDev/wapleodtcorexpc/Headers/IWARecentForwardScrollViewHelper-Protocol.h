//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol WARecentForwardScrollViewHelperDelegate;

@protocol IWARecentForwardScrollViewHelper <NSObject>
@property(readonly, nonatomic) UIView *internalView;
- (void)setDelegate:(id <WARecentForwardScrollViewHelperDelegate>)arg1;
@end

