//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCProductActionItemInfo : NSObject
{
    _Bool isPopUp;
    unsigned int actionType;
    unsigned int index;
    NSString *iconUrl;
    NSString *title;
    NSString *tips;
    NSString *content;
    NSArray *imageUrlList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(retain, nonatomic) NSArray *imageUrlList; // @synthesize imageUrlList;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *tips; // @synthesize tips;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(nonatomic) _Bool isPopUp; // @synthesize isPopUp;

@end

