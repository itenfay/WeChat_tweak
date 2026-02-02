//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveNewCustomGiftItemResourceURL, NSString;

@interface MMFinderLiveNewCustomGiftComponentValue : NSObject
{
    _Bool _customTextDisabled;
    _Bool _usePag;
    NSString *_key;
    NSString *_name;
    double _price;
    MMFinderLiveNewCustomGiftItemResourceURL *_thumbnail;
}

+ (_Bool)isComponentValuePBValid:(id)arg1 business:(id)arg2;
+ (id)transferFromComponentValuePB:(id)arg1 business:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool usePag; // @synthesize usePag=_usePag;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) _Bool customTextDisabled; // @synthesize customTextDisabled=_customTextDisabled;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

