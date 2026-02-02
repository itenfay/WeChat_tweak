//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMLiveCameraOperationItem : NSObject
{
    _Bool _disabled;
    UIImage *_image;
    NSString *_label;
    NSString *_secondaryLabel;
    NSString *_badgeText;
    CDUnknownBlockType _action;
    NSString *_redDotPath;
    NSString *_alternativeRedDotPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *alternativeRedDotPath; // @synthesize alternativeRedDotPath=_alternativeRedDotPath;
@property(retain, nonatomic) NSString *redDotPath; // @synthesize redDotPath=_redDotPath;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(retain, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;

@end

