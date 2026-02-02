//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveLotteryTypeInfo : NSObject
{
    _Bool _disableSelect;
    int _optionValue;
    NSString *_optionName;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableSelect; // @synthesize disableSelect=_disableSelect;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *optionName; // @synthesize optionName=_optionName;
@property(nonatomic) int optionValue; // @synthesize optionValue=_optionValue;

@end

