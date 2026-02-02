//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderEditCropData : NSObject
{
    struct CGPoint _previewScale;
    struct CGRect _cropRectInPreview;
}

@property(nonatomic) struct CGPoint previewScale; // @synthesize previewScale=_previewScale;
@property(nonatomic) struct CGRect cropRectInPreview; // @synthesize cropRectInPreview=_cropRectInPreview;
- (id)initWithVideoPreviewOriginSize:(struct CGSize)arg1 resultSize:(struct CGSize)arg2 cropRect:(struct CGRect)arg3;

@end

