//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdConfirmHalfScreenBaseInfo : NSObject
{
    _Bool _isNotice;
    NSString *_headIconUrl;
    NSString *_name;
    NSString *_title;
    NSString *_desc;
    NSString *_extraDesc;
    NSString *_confirmTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNotice; // @synthesize isNotice=_isNotice;
@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) NSString *extraDesc; // @synthesize extraDesc=_extraDesc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *headIconUrl; // @synthesize headIconUrl=_headIconUrl;

@end

