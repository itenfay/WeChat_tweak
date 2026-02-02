//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OVCImageFileCoverDesc
{
    NSString *_filePath;
    struct CGRect _contentCropRegion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect contentCropRegion; // @synthesize contentCropRegion=_contentCropRegion;
@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (id)initWithFilePath:(id)arg1 contentCropRegion:(struct CGRect)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (id)initWithFilePath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;

@end

