//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoAttr, MMAsset, NSDictionary;
@protocol MMAssetCompositeTaskProtocol;

@interface MMImagePreviewControllerActionFlow : NSObject
{
    _Bool _isPickerFinished;
    _Bool _shouldSaveAlbum;
    id <MMAssetCompositeTaskProtocol> _videoCompositeTask;
    MMAsset *_srcVideoAsset;
    EditVideoAttr *_editVideoAttr;
    NSDictionary *_byPassInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) MMAsset *srcVideoAsset; // @synthesize srcVideoAsset=_srcVideoAsset;
@property(retain, nonatomic) id <MMAssetCompositeTaskProtocol> videoCompositeTask; // @synthesize videoCompositeTask=_videoCompositeTask;
@property(nonatomic) _Bool shouldSaveAlbum; // @synthesize shouldSaveAlbum=_shouldSaveAlbum;
@property(nonatomic) _Bool isPickerFinished; // @synthesize isPickerFinished=_isPickerFinished;

@end

