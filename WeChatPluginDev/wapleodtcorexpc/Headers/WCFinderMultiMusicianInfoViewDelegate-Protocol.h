//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderContact, FinderSingerInfo, UIView;

@protocol WCFinderMultiMusicianInfoViewDelegate <NSObject>
- (void)onMultiMusicianCard:(UIView *)arg1 singerInfo:(FinderSingerInfo *)arg2;
- (void)onMultiMusicianClickSingerContact:(FinderContact *)arg1;
@end

