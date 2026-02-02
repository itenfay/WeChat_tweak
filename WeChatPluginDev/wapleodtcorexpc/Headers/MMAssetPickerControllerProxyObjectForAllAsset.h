//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAlbum, NSMutableArray, NSString;
@protocol MMImagePickerControlCenter;

@interface MMAssetPickerControllerProxyObjectForAllAsset : NSObject
{
    _Bool _bPickerStyleForFile;
    MMAlbum *m_album;
    NSMutableArray *_selectedInfos;
    NSMutableArray *_m_assetArray;
    id <MMImagePickerControlCenter> _controlCenter;
    NSMutableArray *_otherAlbumSelectedInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *otherAlbumSelectedInfos; // @synthesize otherAlbumSelectedInfos=_otherAlbumSelectedInfos;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
@property(retain, nonatomic) NSMutableArray *m_assetArray; // @synthesize m_assetArray=_m_assetArray;
@property(nonatomic) _Bool bPickerStyleForFile; // @synthesize bPickerStyleForFile=_bPickerStyleForFile;
@property(retain, nonatomic) NSMutableArray *selectedInfos; // @synthesize selectedInfos=_selectedInfos;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album;
- (unsigned long long)getSelectedAssetTotalSize;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)selectedAssetInfosForPreview;
- (_Bool)isPreviewStyleForFile;
- (_Bool)isPreviewSelectedOnly;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

