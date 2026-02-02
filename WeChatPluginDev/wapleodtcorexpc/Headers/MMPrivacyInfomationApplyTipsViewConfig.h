//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMPrivacyInfomationApplyTipsViewConfig : NSObject
{
    UIImage *_bussinessIcon;
    NSString *_bussinessName;
    NSString *_title;
    NSString *_desc;
    NSString *_descHint;
    CDUnknownBlockType _allowAction;
    CDUnknownBlockType _disallowAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType disallowAction; // @synthesize disallowAction=_disallowAction;
@property(copy, nonatomic) CDUnknownBlockType allowAction; // @synthesize allowAction=_allowAction;
@property(retain, nonatomic) NSString *descHint; // @synthesize descHint=_descHint;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *bussinessName; // @synthesize bussinessName=_bussinessName;
@property(retain, nonatomic) UIImage *bussinessIcon; // @synthesize bussinessIcon=_bussinessIcon;

@end

