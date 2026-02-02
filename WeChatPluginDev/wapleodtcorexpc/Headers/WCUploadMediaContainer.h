//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCUploadMedia;

@interface WCUploadMediaContainer : NSObject
{
    WCUploadMedia *_mainUploadMedia;
    WCUploadMedia *_livePhotoUploadMedia;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCUploadMedia *livePhotoUploadMedia; // @synthesize livePhotoUploadMedia=_livePhotoUploadMedia;
@property(readonly, nonatomic) WCUploadMedia *mainUploadMedia; // @synthesize mainUploadMedia=_mainUploadMedia;
- (id)initWithMainUploadMedia:(id)arg1;

@end

