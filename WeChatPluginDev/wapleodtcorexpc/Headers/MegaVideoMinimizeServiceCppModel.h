//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedContentVM;

@interface MegaVideoMinimizeServiceCppModel : NSObject
{
    WCFinderFeedContentVM *_cachedPlayingContentVM;
    WCFinderFeedContentVM *_cachedNextContentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *cachedNextContentVM; // @synthesize cachedNextContentVM=_cachedNextContentVM;
@property(retain, nonatomic) WCFinderFeedContentVM *cachedPlayingContentVM; // @synthesize cachedPlayingContentVM=_cachedPlayingContentVM;
- (int)listType;
- (id)openParam;
- (void)fetchContinuePlayFeed;
- (void)updatePlayingContentVM:(id)arg1 isFromContinuePlay:(_Bool)arg2;
- (id)nextContentVM;
- (id)playingContentVM;
- (id)contentVMFromMegaFeedData:(id)arg1 commentScene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

