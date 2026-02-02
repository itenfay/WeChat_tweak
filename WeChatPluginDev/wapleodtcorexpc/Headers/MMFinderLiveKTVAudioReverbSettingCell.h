//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVAudioEffectSettingUserInfo, MMUIView, NSArray, NSString, UICollectionView;

@interface MMFinderLiveKTVAudioReverbSettingCell
{
    MMFinderLiveKTVAudioEffectSettingUserInfo *_customUserInfo;
    MMUIView *_contentView;
    NSArray *_reverbItems;
    UICollectionView *_collectionView;
}

+ (double)getAspectHeightWithContentW:(double)arg1 itemCnt:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *reverbItems; // @synthesize reverbItems=_reverbItems;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveKTVAudioEffectSettingUserInfo *customUserInfo; // @synthesize customUserInfo=_customUserInfo;
- (id)liveTask;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutUI;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initCellConfig;
- (id)initWithSize:(struct CGSize)arg1 userInfo:(id)arg2 reverbItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

