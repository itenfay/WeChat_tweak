//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocation, NSArray, NSString;

@interface LbsLifeData
{
    CLLocation *_location;
    NSArray *_lbsLifeList;
    NSArray *_iconUrlList;
    _Bool _continueFlag;
    _Bool _isStartFromFirst;
    NSString *_logoUrl;
    NSString *_searchID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStartFromFirst; // @synthesize isStartFromFirst=_isStartFromFirst;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSArray *iconUrlList; // @synthesize iconUrlList=_iconUrlList;
@property(retain, nonatomic) NSArray *lbsLifeList; // @synthesize lbsLifeList=_lbsLifeList;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;

@end

