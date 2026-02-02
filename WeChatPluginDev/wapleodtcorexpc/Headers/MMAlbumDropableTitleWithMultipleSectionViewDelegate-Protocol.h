//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMAlbumDropableTitleViewDelegate-Protocol.h"

@protocol MMAlbumDropableTitleWithMultipleSectionViewDelegate <MMAlbumDropableTitleViewDelegate>

@optional
- (void)onAlbumTitleWillDeactive;
- (void)onSwitchToSectionAtIndex:(unsigned long long)arg1;
@end

