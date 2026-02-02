//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJVideoTemplate, NSMutableArray;

@interface WCVideoProducerEditSegmentOperation
{
    MJVideoTemplate *_templateInfo;
    NSMutableArray *_editAssetClipOperationList;
    NSMutableArray *_editLaunchMJOperationList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *editLaunchMJOperationList; // @synthesize editLaunchMJOperationList=_editLaunchMJOperationList;
@property(retain, nonatomic) NSMutableArray *editAssetClipOperationList; // @synthesize editAssetClipOperationList=_editAssetClipOperationList;
@property(retain, nonatomic) MJVideoTemplate *templateInfo; // @synthesize templateInfo=_templateInfo;
- (void)_recordEditAssetClipOperationWithAsset:(id)arg1 clipSegment:(id)arg2 atIndex:(long long)arg3 forType:(long long)arg4;
- (void)segmentDidLaunchMJApp;
- (void)segmentDidCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)segmentDidFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTemplateInfo:(id)arg1;

@end

