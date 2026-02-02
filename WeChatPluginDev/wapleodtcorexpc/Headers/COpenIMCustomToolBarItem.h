//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface COpenIMCustomToolBarItem : NSObject
{
    NSString *_icon;
    NSString *_title;
    NSString *_desc;
    NSString *_actionUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

