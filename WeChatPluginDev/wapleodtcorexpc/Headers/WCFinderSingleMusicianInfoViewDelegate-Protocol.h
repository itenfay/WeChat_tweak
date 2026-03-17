//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderContact, NSString;

@protocol WCFinderSingleMusicianInfoViewDelegate <NSObject>
- (void)onSingleMusicianSignatureExpand:(_Bool)arg1;
- (void)onSingleMusicianClickSignatureAtText:(NSString *)arg1;
- (void)onSingleMusicianClickSingerContact:(FinderContact *)arg1;
@end

