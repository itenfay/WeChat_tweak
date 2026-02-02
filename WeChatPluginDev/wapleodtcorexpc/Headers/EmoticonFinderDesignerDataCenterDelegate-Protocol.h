//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol EmoticonFinderDesignerDataCenterDelegate <NSObject>

@optional
- (void)onNeedReloadForDataChange;
- (void)onFetchEmoticonDataFailedForType:(unsigned long long)arg1;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)arg1 andHasMore:(_Bool)arg2;
- (void)onFirstFetchFailed;
- (void)onFirstFetchFinished;
- (void)onGotTotalEmoticonCount:(unsigned long long)arg1 emojiCount:(unsigned long long)arg2;
@end

