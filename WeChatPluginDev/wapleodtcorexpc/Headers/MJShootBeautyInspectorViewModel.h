//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootBeautyItem, MJShootBeautyMainPanelItem, NSArray, NSMutableDictionary, OMJBeautyAdjustmentDesc;

@interface MJShootBeautyInspectorViewModel
{
    _Bool _didAdjustBeautyParam;
    MJShootBeautyMainPanelItem *_selectedBeautyMainPanelItem;
    NSArray *_beautyMainPanelItems;
    OMJBeautyAdjustmentDesc *_adjustingBeautyDesc;
    MJShootBeautyItem *_selectedBeautyItem;
    NSArray *_beautyItemsForAdjustingDesc;
    NSMutableDictionary *_beautyDescByID;
    NSMutableDictionary *_originalBeautyDescByID;
}

+ (id)defaultMainPanelItems;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *originalBeautyDescByID; // @synthesize originalBeautyDescByID=_originalBeautyDescByID;
@property(retain, nonatomic) NSMutableDictionary *beautyDescByID; // @synthesize beautyDescByID=_beautyDescByID;
@property(nonatomic) _Bool didAdjustBeautyParam; // @synthesize didAdjustBeautyParam=_didAdjustBeautyParam;
@property(retain, nonatomic) NSArray *beautyItemsForAdjustingDesc; // @synthesize beautyItemsForAdjustingDesc=_beautyItemsForAdjustingDesc;
@property(retain, nonatomic) MJShootBeautyItem *selectedBeautyItem; // @synthesize selectedBeautyItem=_selectedBeautyItem;
@property(retain, nonatomic) OMJBeautyAdjustmentDesc *adjustingBeautyDesc; // @synthesize adjustingBeautyDesc=_adjustingBeautyDesc;
@property(retain, nonatomic) NSArray *beautyMainPanelItems; // @synthesize beautyMainPanelItems=_beautyMainPanelItems;
@property(retain, nonatomic) MJShootBeautyMainPanelItem *selectedBeautyMainPanelItem; // @synthesize selectedBeautyMainPanelItem=_selectedBeautyMainPanelItem;
- (id)calcUserCachedBeautyDescKeyWithID:(id)arg1;
- (id)getUserCachedBeautyDescWithID:(id)arg1 materialID:(id)arg2;
- (void)updateUserCachedBeautyDesc:(id)arg1 materialID:(id)arg2;
- (id)beautyItemsWithAdjustingDesc:(id)arg1 originalDesc:(id)arg2;
- (id)selectedBeautyItemIndexPath;
- (id)selectedBeautyMainPanelItemIndexPath;
- (void)clearBeautyEffectWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateCamEffectWithBeautyDesc:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)adjustingDescOnItemValueChanged:(id)arg1;
- (void)resetAdjustingDesc;
- (void)didFinishAdjustingDesc;
- (void)prepareToAdjustingDescWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadBeautyMainPanelItem:(id)arg1 shouldUpdateEffect:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)refetchAndRestoreBeautyEffectWithCompletion:(CDUnknownBlockType)arg1;
- (void)didSelectBeautyItem:(id)arg1;
- (void)didSelectBeautyMainPanelItem:(id)arg1;
- (id)getOriginalBeautyDescWithItem:(id)arg1;
- (id)getBeautyDescWithItem:(id)arg1;
- (void)fetchBeautyDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchBeautyDataIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

