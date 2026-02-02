//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface GameShareDataImageModel : NSObject
{
    NSString *_imgUrl;
    NSString *_localId;
    NSString *_base64Data;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *base64Data; // @synthesize base64Data=_base64Data;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void)triggerGetImapgeWithComplectionBlock:(CDUnknownBlockType)arg1;

@end

