//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PSTNCheckNumberRespInfo : NSObject
{
    unsigned int _result;
    NSString *_PureNumber;
    NSString *_CountryCode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *CountryCode; // @synthesize CountryCode=_CountryCode;
@property(copy, nonatomic) NSString *PureNumber; // @synthesize PureNumber=_PureNumber;

@end

