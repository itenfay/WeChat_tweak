//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMWebLimitedModeUrlData : NSObject
{
    NSString *_url;
    NSString *_title;
    NSString *_coverUrl;
    NSData *_coverData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *coverData; // @synthesize coverData=_coverData;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;
- (_Bool)isValid;

@end

