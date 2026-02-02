//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent, UIView;

@protocol MainTableDelegate <NSObject>
- (double)getContentViewY;
- (double)getMainTableBottomInset;
- (double)getMainTableHeight;

@optional
- (unsigned long long)handleTouchesShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2 inContentView:(UIView *)arg3;
- (unsigned long long)handleTouchesShouldCancelInContentView:(UIView *)arg1;
@end

