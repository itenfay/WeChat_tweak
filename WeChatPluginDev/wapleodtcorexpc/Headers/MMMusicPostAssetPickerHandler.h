//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMMusicPostAssetPickerHandler : NSObject
{
    CDUnknownBlockType _onSelectedAssetChanged;
    NSMutableArray *_selectedModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedModels; // @synthesize selectedModels=_selectedModels;
@property(copy, nonatomic) CDUnknownBlockType onSelectedAssetChanged; // @synthesize onSelectedAssetChanged=_onSelectedAssetChanged;
- (void)postVideoViewController:(id)arg1 onFinderVideoSelectedBtnChecked:(id)arg2;
- (void)postVideoViewController:(id)arg1 onLocalVideoAssetSelectedBtnChecked:(id)arg2;
- (_Bool)addOrRemoveSelectedModel:(id)arg1 addHandler:(CDUnknownBlockType)arg2 removeHandler:(CDUnknownBlockType)arg3;
- (_Bool)addOrRemoveSelectedModel:(id)arg1;
- (void)onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(struct CGRect)arg3;
- (void)onTabFinderSearch:(id)arg1;
- (void)onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(struct CGRect)arg3;
- (id)getSelectedArr;
- (id)getSelectedModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

