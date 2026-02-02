//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WebViewMenuItem : NSObject
{
    NSString *_itemID;
    NSString *_title;
    NSString *_url;
    UIImage *_iconImage;
    NSString *_key;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void)setTitleWithID:(id)arg1;
- (id)init;

@end

