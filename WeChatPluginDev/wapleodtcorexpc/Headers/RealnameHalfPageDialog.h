//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RealnameHalfPageDialog : NSObject
{
    NSString *_title;
    NSString *_wording;
    NSString *_btn_cancel;
    NSString *_btn_confirm;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *btn_confirm; // @synthesize btn_confirm=_btn_confirm;
@property(retain, nonatomic) NSString *btn_cancel; // @synthesize btn_cancel=_btn_cancel;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

