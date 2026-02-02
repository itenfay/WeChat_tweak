//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdDetermineHalfScreenInfo : NSObject
{
    NSString *_headIconUrl;
    NSString *_headIconLocalName;
    NSString *_name;
    NSString *_title;
    NSString *_desc;
    NSString *_cancelTitle;
    NSString *_confirmTitle;
    NSObject *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *headIconLocalName; // @synthesize headIconLocalName=_headIconLocalName;
@property(retain, nonatomic) NSString *headIconUrl; // @synthesize headIconUrl=_headIconUrl;

@end

