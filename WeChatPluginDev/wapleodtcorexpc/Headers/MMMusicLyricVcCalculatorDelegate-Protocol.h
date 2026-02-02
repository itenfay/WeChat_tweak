//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMMusicLyricVcCalculatorDelegate <NSObject>
- (void)onCurrentLyricChangeTo:(NSString *)arg1 timeToNext:(double)arg2 currIndex:(unsigned int)arg3;

@optional
- (void)onUpdateCurOffset:(double)arg1;
@end

