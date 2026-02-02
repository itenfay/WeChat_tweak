//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderFlowCellAutoplayProtocol <NSObject>
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (unsigned long long)autoPlayCellType;

@optional
- (struct CGRect)autoPlayPlayerArea;
- (_Bool)shouldPreventAutoPlay;
@end

