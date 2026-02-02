//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderHSVModel : NSObject
{
    unsigned long long _hValue;
    unsigned long long _sValue;
    unsigned long long _vValue;
}

@property(nonatomic) unsigned long long vValue; // @synthesize vValue=_vValue;
@property(nonatomic) unsigned long long sValue; // @synthesize sValue=_sValue;
@property(nonatomic) unsigned long long hValue; // @synthesize hValue=_hValue;

@end

