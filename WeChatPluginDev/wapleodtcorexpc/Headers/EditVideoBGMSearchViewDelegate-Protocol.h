//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RecommendedMusicInfo;

@protocol EditVideoBGMSearchViewDelegate <NSObject>
- (void)onEditVideoBGMSearchViewFinish:(RecommendedMusicInfo *)arg1 searchKey:(NSString *)arg2;
- (void)onEditVideoBGMSearchViewCancel;
@end

