//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString, WCFinderStreamLoadingState;

@interface WCFinderStreamProfileMusicPlaylist
{
    NSString *_username;
    WCFinderStreamLoadingState *_state;
    CDUnknownBlockType _fillRequestBlock;
    CDUnknownBlockType _fillFromResponseBlock;
    NSData *_lastBuff;
    NSMutableArray *_mutCategoryItems;
}

+ (void)removeAllObserver:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutCategoryItems; // @synthesize mutCategoryItems=_mutCategoryItems;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) CDUnknownBlockType fillFromResponseBlock; // @synthesize fillFromResponseBlock=_fillFromResponseBlock;
@property(copy, nonatomic) CDUnknownBlockType fillRequestBlock; // @synthesize fillRequestBlock=_fillRequestBlock;
@property(readonly, nonatomic) WCFinderStreamLoadingState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)requestMore:(CDUnknownBlockType)arg1;
- (id)finderUsername;
- (id)loadingState;
- (id)displayTitle;
- (id)sectionItems;
- (void)registerKeyExtension:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)categoryItems;
- (void)appendCategoryList:(id)arg1;
- (void)requestNextPage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

