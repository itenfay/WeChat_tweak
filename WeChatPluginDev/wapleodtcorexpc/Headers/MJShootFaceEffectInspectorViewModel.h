//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootVisageInspectorItem, NSArray, NSIndexPath;

@interface MJShootFaceEffectInspectorViewModel
{
    NSArray *_faceEffectItems;
    MJShootVisageInspectorItem *_selectedFaceEffectItem;
    NSIndexPath *_selectedIndexPath;
}

+ (id)defaultFaceEffectItems;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) MJShootVisageInspectorItem *selectedFaceEffectItem; // @synthesize selectedFaceEffectItem=_selectedFaceEffectItem;
@property(retain, nonatomic) NSArray *faceEffectItems; // @synthesize faceEffectItems=_faceEffectItems;
- (void)resetSelectionToNone;
- (void)updateFaceEffectWithItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleSelectItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)restoreFaceEffectInnerWithCompletion:(CDUnknownBlockType)arg1;
- (void)refetchAndRestoreFaceEffectWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreFaceEffectWithCompletion:(CDUnknownBlockType)arg1;
- (void)refetchFaceEffectDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceEffectDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceEffectDataIfNeededWithCompletion:(CDUnknownBlockType)arg1;

@end

