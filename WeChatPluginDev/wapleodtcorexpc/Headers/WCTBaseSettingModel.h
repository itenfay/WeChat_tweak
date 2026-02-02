//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTBaseSettingModel : NSObject
{
    _Bool _disableSelect;
    NSString *_title;
    id _userInfo;
    long long _tag;
    unsigned long long _accessibilityTraits;
}

+ (id)createWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long accessibilityTraits; // @synthesize accessibilityTraits=_accessibilityTraits;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool disableSelect; // @synthesize disableSelect=_disableSelect;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

