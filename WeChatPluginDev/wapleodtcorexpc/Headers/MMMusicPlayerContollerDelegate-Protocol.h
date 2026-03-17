//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicInfo;

@protocol MMMusicPlayerContollerDelegate <NSObject>

@optional
- (void)onClickToPlayMusic:(MMMusicInfo *)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
@end

