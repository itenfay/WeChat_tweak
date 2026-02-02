//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AffEmoticonDesignerListDataRecieverImpl : NSObject
{
}

- (void)onFetchEmoticonDataFailedFor:(id)arg1 dataType:(int)arg2;
- (void)onFetchEmoticonFinishedFor:(id)arg1 dataType:(int)arg2 hasMore:(_Bool)arg3;
- (void)onFirstFetchFailed:(id)arg1;
- (void)onFirstFetchFinished:(id)arg1;
- (void)onGotTotalEmoticonCount:(id)arg1 emoticonCount:(int)arg2 emojiCount:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

