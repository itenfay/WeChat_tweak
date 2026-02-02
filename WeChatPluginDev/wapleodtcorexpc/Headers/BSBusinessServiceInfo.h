//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BSBusinessServiceInfo : NSObject
{
    NSString *_title;
    NSString *_serviceUrl;
    NSDictionary *_itemFieldDict;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *itemFieldDict; // @synthesize itemFieldDict=_itemFieldDict;
@property(retain, nonatomic) NSString *serviceUrl; // @synthesize serviceUrl=_serviceUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

