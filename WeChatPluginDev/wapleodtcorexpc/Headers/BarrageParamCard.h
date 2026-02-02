//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BarrageParamCard : NSObject
{
    _Bool _isSelect;
    unsigned long long _cardType;
    NSString *_cardTitle;
    double _paramValue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) double paramValue; // @synthesize paramValue=_paramValue;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;

@end

