//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@interface UIControl (ZZEvent)
- (id)controlTargetList;
- (void)removeControlEvents:(unsigned long long)arg1;
- (void)addControlEvents:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setControlEvents:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
@end

