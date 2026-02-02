//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveImagePickerParams : NSObject
{
    _Bool _showPreviewButton;
    unsigned long long _pickerScene;
    NSString *_previewBulletinTitle;
    struct CGSize _cropImageRatio;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *previewBulletinTitle; // @synthesize previewBulletinTitle=_previewBulletinTitle;
@property(nonatomic) _Bool showPreviewButton; // @synthesize showPreviewButton=_showPreviewButton;
@property(nonatomic) struct CGSize cropImageRatio; // @synthesize cropImageRatio=_cropImageRatio;
@property(nonatomic) unsigned long long pickerScene; // @synthesize pickerScene=_pickerScene;

@end

