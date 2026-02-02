//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatePublishConfiguration : NSObject
{
    _Bool _canEditBackground;
    _Bool _canEditIcon;
    _Bool _showToast;
    _Bool _preserveLastPrivacyIfNeeded;
    _Bool _checkExceed;
    NSString *_title;
    NSString *_subtitle;
}

+ (id)followConfiguration;
+ (id)editConfiguration;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic) _Bool checkExceed; // @synthesize checkExceed=_checkExceed;
@property(nonatomic) _Bool preserveLastPrivacyIfNeeded; // @synthesize preserveLastPrivacyIfNeeded=_preserveLastPrivacyIfNeeded;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showToast; // @synthesize showToast=_showToast;
@property(nonatomic) _Bool canEditIcon; // @synthesize canEditIcon=_canEditIcon;
@property(nonatomic) _Bool canEditBackground; // @synthesize canEditBackground=_canEditBackground;

@end

