//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCFinderMPVideoService
{
    NSMutableDictionary *_exportIdToTidDict;
    NSMutableDictionary *_eposeDict;
}

+ (id)playStatusWithPlayerView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *eposeDict; // @synthesize eposeDict=_eposeDict;
@property(retain, nonatomic) NSMutableDictionary *exportIdToTidDict; // @synthesize exportIdToTidDict=_exportIdToTidDict;
- (int)commentScene;
- (void)onFinderDataItem:(id)arg1 updateFavStateByKeyExtention:(_Bool)arg2;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)_updateExtensionWithDataItem:(id)arg1;
- (void)reportBePopedWithJSON:(id)arg1;
- (void)reportDisAppearWithJSON:(id)arg1;
- (void)reportAppearWithJSON:(id)arg1;
- (void)changeFeedLikeStatusWithJSON:(id)arg1 isLike:(_Bool)arg2;
- (void)changeFeedFavStatusWithJSON:(id)arg1 isFav:(_Bool)arg2;
- (void)showMPVideoDetailWithJSON:(id)arg1 playStatus:(id)arg2 extInfo:(id)arg3 currentNavController:(id)arg4 complectionBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 callBackBlock:(CDUnknownBlockType)arg7;
- (void)asyncGetMPVideoMediaWrapWithFinderMPVideoJSON:(id)arg1 complectionBlock:(CDUnknownBlockType)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

