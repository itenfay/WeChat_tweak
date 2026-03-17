//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMMusicDataVM;

@interface MVImagePreviewDataSourceForFinder : NSObject
{
    id <MMMusicDataVM> _dataViewModel;
}

@property(retain, nonatomic) id <MMMusicDataVM> dataViewModel; // @synthesize dataViewModel=_dataViewModel;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (id)initWithDataViewModel:(id)arg1;

@end

