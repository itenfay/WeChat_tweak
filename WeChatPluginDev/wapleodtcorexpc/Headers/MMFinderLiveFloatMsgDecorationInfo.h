//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveFloatMsgDecorationInfo : NSObject
{
    unsigned int _decorationLevel;
    NSString *_productId;
    NSString *_name;
    unsigned long long _priceInWecoin;
    NSArray *_wordColors;
    NSArray *_borderColors;
    NSArray *_decorationItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *decorationItems; // @synthesize decorationItems=_decorationItems;
@property(nonatomic) unsigned int decorationLevel; // @synthesize decorationLevel=_decorationLevel;
@property(retain, nonatomic) NSArray *borderColors; // @synthesize borderColors=_borderColors;
@property(retain, nonatomic) NSArray *wordColors; // @synthesize wordColors=_wordColors;
@property(nonatomic) unsigned long long priceInWecoin; // @synthesize priceInWecoin=_priceInWecoin;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (_Bool)readyForDisplay;

@end

