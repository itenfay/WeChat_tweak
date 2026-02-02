//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WASkylineViewDelegate <NSObject>
- (void)onSkylineNavigateBackDone:(long long)arg1;
- (void)onSkylineNavigateBack:(long long)arg1;
- (void)onSkylineRouteDone:(long long)arg1;
- (void)onSkylineWindowReady;
@end

