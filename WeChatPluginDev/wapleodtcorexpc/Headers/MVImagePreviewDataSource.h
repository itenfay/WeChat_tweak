//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MVImagePreviewDataSource : NSObject
{
    NSMutableArray *_selectedViewModels;
    NSString *_identifier;
    NSMutableArray *_selectedAssetInfosArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfosArray; // @synthesize selectedAssetInfosArray=_selectedAssetInfosArray;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *selectedViewModels; // @synthesize selectedViewModels=_selectedViewModels;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (id)generateAssetInfoFromModel:(id)arg1;
- (long long)indexForSelectedModel:(id)arg1;
- (void)reloadSelectedWithSelectItemViewModels:(id)arg1;
- (void)reloadSelectedAssetInfos;
- (_Bool)showSelectedNumbers;
- (_Bool)isPreviewStyleForFile;
- (id)customBrowserViewForAssetInfo:(id)arg1;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (_Bool)isPreviewSelectedAssetInfosContainsVideo;
- (id)selectedAssetInfosForPreview;
- (_Bool)isPreviewSelectedOnly;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

