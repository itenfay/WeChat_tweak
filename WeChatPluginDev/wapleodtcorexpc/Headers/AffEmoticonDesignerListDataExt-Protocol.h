//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol AffEmoticonDesignerListDataExt <NSObject>
- (void)onFetchEmoticonDataFailedForType:(int)arg1;
- (void)onFetchEmoticonFinishedForType:(int)arg1 hasMore:(_Bool)arg2;
- (void)onFirstFetchFailed;
- (void)onFirstFetchFinished;
- (void)onGotTotalEmoticonCount:(int)arg1 emojiCount:(int)arg2;
@end

