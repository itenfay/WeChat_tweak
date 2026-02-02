//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MVImagePreviewDataSourceForDraft
{
    NSMutableArray *_draftItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *draftItems; // @synthesize draftItems=_draftItems;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (id)identifier;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (id)initWithDraftItems:(id)arg1;

@end

