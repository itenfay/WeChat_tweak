//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SecurityDialogButtonInfo;

@interface PaySecurityDialogInfo : NSObject
{
    NSString *_title;
    NSString *_logo;
    NSString *_wording;
    SecurityDialogButtonInfo *_left_btn;
    SecurityDialogButtonInfo *_right_btn;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain) SecurityDialogButtonInfo *right_btn; // @synthesize right_btn=_right_btn;
@property(retain) SecurityDialogButtonInfo *left_btn; // @synthesize left_btn=_left_btn;
@property(retain) NSString *wording; // @synthesize wording=_wording;
@property(retain) NSString *logo; // @synthesize logo=_logo;
@property(retain) NSString *title; // @synthesize title=_title;

@end

