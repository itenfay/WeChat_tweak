//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdHalfScreenContainerInfo : NSObject
{
    _Bool _isSubmitBtnShow;
    NSString *_headImageUrl;
    NSString *_title;
    NSString *_desc;
    NSString *_tips;
    NSString *_btnTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSubmitBtnShow; // @synthesize isSubmitBtnShow=_isSubmitBtnShow;
@property(retain, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;

@end

