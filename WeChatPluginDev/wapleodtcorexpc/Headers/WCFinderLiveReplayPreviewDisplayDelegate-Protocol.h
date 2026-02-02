//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveReplayGreateTimeModel;

@protocol WCFinderLiveReplayPreviewDisplayDelegate <NSObject>
- (void)onFetchAllPreviewPlayerDataChanged;
- (_Bool)onDisplaySizeChanged:(struct CGSize)arg1;
- (MMFinderLiveReplayGreateTimeModel *)getNearestGreateTimeModelWithTime:(double)arg1;
@end

