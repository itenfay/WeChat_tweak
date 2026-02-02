//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PSTNCheckNumberReqInfo : NSObject
{
    unsigned int _DialScene;
    NSString *_PureNumber;
    NSString *_ClientCountry;
    NSString *_LastCountry;
    NSString *_SimCountry;
    NSString *_OsCountry;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int DialScene; // @synthesize DialScene=_DialScene;
@property(copy, nonatomic) NSString *OsCountry; // @synthesize OsCountry=_OsCountry;
@property(copy, nonatomic) NSString *SimCountry; // @synthesize SimCountry=_SimCountry;
@property(copy, nonatomic) NSString *LastCountry; // @synthesize LastCountry=_LastCountry;
@property(copy, nonatomic) NSString *ClientCountry; // @synthesize ClientCountry=_ClientCountry;
@property(copy, nonatomic) NSString *PureNumber; // @synthesize PureNumber=_PureNumber;

@end

