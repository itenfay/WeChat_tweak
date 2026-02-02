//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage, WCFinderContact;

@interface MMFinderLiveEditImagePreviewPageSheetModel : NSObject
{
    UIImage *_cover4Vs3Image;
    NSString *_previewBulletinTitle;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *previewBulletinTitle; // @synthesize previewBulletinTitle=_previewBulletinTitle;
@property(retain, nonatomic) UIImage *cover4Vs3Image; // @synthesize cover4Vs3Image=_cover4Vs3Image;

@end

