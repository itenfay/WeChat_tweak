//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIImage;

@interface GCInviteTipViewConfig : NSObject
{
    UIImage *_iconImg;
    NSString *_topTitle;
    NSAttributedString *_descAttr;
    NSString *_confirmText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
@property(retain, nonatomic) NSAttributedString *descAttr; // @synthesize descAttr=_descAttr;
@property(retain, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;

@end

