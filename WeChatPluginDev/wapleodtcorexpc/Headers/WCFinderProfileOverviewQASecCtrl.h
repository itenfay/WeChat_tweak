//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiteAppParam, NSString, OpenLiteAppInfo, UIView, WCFinderLiteAppFixedEmbdaView;

@interface WCFinderProfileOverviewQASecCtrl
{
    _Bool _needSaveCacheHeight;
    UIView *_maskView;
    FinderLiteAppParam *_params;
    WCFinderLiteAppFixedEmbdaView *_embdaView;
    OpenLiteAppInfo *_liteAppInfo;
    struct CGSize _displaySize;
}

+ (void)setupRegister:(id)arg1;
+ (id)appendHalfStyleArgument:(id)arg1 isHalfScreen:(_Bool)arg2;
+ (id)sectionDefines;
- (void).cxx_destruct;
@property(nonatomic) _Bool needSaveCacheHeight; // @synthesize needSaveCacheHeight=_needSaveCacheHeight;
@property(nonatomic) struct CGSize displaySize; // @synthesize displaySize=_displaySize;
@property(retain, nonatomic) OpenLiteAppInfo *liteAppInfo; // @synthesize liteAppInfo=_liteAppInfo;
@property(retain, nonatomic) WCFinderLiteAppFixedEmbdaView *embdaView; // @synthesize embdaView=_embdaView;
@property(retain, nonatomic) FinderLiteAppParam *params; // @synthesize params=_params;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)onLiteAppEmbdaViewSizeChanged:(id)arg1;
- (_Bool)showBottomJumpTabButton;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (void)setContactViewModel:(id)arg1;
- (long long)moreBtnType;
- (id)sectionTitle;
- (id)qaInfo;
- (void)setModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

