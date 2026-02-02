//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MMMusicMVPreviewEpisodeSelectViewDelegate <NSObject>
- (NSArray *)episodeSelectViewDataSource;

@optional
- (void)episodeSelectViewDidSelectEpisodeAtIndex:(unsigned long long)arg1;
@end

