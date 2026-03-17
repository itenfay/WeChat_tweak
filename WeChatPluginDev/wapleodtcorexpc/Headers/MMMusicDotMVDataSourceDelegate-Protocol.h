//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMMusicDotMVDataSourceDelegate <NSObject>
- (void)onDotMvDataSourceCurrDotIndexChangedFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 playedTimeInMs:(unsigned int)arg3 videoTimeOffset:(double)arg4;
- (void)onDotMvDataSourcePlayedTimeChanged:(unsigned int)arg1;
@end

