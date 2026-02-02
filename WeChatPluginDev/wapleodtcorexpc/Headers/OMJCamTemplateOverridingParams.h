//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, OMJBeautyAdjustmentDesc, OMJCamFilterDesc, OMJCamMusicDesc;

@interface OMJCamTemplateOverridingParams : NSObject
{
    OMJBeautyAdjustmentDesc *_beautyDesc;
    OMJCamFilterDesc *_filterDesc;
    OMJCamMusicDesc *_musicDesc;
    NSDictionary *_assetInfosByKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *assetInfosByKey; // @synthesize assetInfosByKey=_assetInfosByKey;
@property(retain, nonatomic) OMJCamMusicDesc *musicDesc; // @synthesize musicDesc=_musicDesc;
@property(retain, nonatomic) OMJCamFilterDesc *filterDesc; // @synthesize filterDesc=_filterDesc;
@property(retain, nonatomic) OMJBeautyAdjustmentDesc *beautyDesc; // @synthesize beautyDesc=_beautyDesc;

@end

