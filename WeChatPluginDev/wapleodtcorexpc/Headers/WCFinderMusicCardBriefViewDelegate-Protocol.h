//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderMusicInfo, NSMutableArray, NSString, WCFinderContact;

@protocol WCFinderMusicCardBriefViewDelegate <NSObject>
- (void)onBriefHeaderClickJoinBtn:(FinderMusicInfo *)arg1 musicIdPrefix:(NSString *)arg2;
- (void)onMusicEventHeaderViewClickProfile:(NSMutableArray *)arg1 contactInfo:(WCFinderContact *)arg2;
@end

