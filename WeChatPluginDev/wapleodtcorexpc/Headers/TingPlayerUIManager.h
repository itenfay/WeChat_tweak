//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingItem;

@interface TingPlayerUIManager : NSObject
{
    TingItem *_autoResumeFailItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingItem *autoResumeFailItem; // @synthesize autoResumeFailItem=_autoResumeFailItem;
- (void)applicationDidBecomeActive;
- (void)flowPlayer:(id)arg1 onItemLoaded:(id)arg2;
- (void)flowPlayer:(id)arg1 onPlayingItemReplaced:(id)arg2;
- (void)markAutoResumeFailItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

