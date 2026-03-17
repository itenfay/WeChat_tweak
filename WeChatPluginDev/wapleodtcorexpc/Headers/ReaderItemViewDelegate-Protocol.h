//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, ReaderItemView, UIImage;

@protocol ReaderItemViewDelegate <NSObject>
- (_Bool)bShouldReportShowInfo;
- (NSArray *)getReadWraps;
- (void)onReaderItemDidLoadCoverImage:(unsigned int)arg1 coverImage:(UIImage *)arg2 cover:(NSString *)arg3;
- (void)onReaderItemLongPress:(unsigned int)arg1;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(ReaderItemView *)arg2;
- (void)onReaderItemBeginTouch:(unsigned int)arg1;
@end

