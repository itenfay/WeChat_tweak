//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayNumberTipsModalViewData : NSObject
{
    NSString *_title;
    NSString *_content;
    NSString *_cancelBtn;
    NSString *_confirmBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) NSString *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

