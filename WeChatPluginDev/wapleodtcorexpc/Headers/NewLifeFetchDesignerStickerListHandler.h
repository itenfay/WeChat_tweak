//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DesignerPortfolioCollectionViewProvider, NSString;

@interface NewLifeFetchDesignerStickerListHandler
{
    DesignerPortfolioCollectionViewProvider *_provider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DesignerPortfolioCollectionViewProvider *provider; // @synthesize provider=_provider;
- (void)onFetchEmoticonDataFailed;
- (void)onGetEmoticonPacksForDisplay:(_Bool)arg1;
- (_Bool)shouldRemoveExpiredPack;
- (unsigned int)emoticonDesignerUin;
- (void)endActionWithHasStickerList:(_Bool)arg1;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

