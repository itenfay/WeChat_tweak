//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface MVimagePreviewDataSourceForAlbum
{
    NSMutableArray *_modelList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *modelList; // @synthesize modelList=_modelList;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)initWithModelList:(id)arg1;

@end

