//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TextStateBaseMediaViewDelegate <NSObject>

@optional
- (void)onMediaProgressChange:(double)arg1;
- (void)requestUpdateDataSource;
- (void)onMediaViewRefresh;
- (void)onMediaFinishPlaying;
@end

