//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCSTokenPickData : NSObject
{
    BOOL _type;
    _Bool _multiSelect;
    NSString *_nsTokenQuery;
    NSString *_nsTokenUsr;
    long long _resultSection;
    long long _selectedIndex;
    NSMutableArray *_arrResult;
    NSMutableDictionary *_dicMatchTip;
    NSString *_sectionTitle;
    NSMutableArray *_arrMultiSelectedUsr;
    NSMutableDictionary *_dicMultiSelectedUsrIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicMultiSelectedUsrIndex; // @synthesize dicMultiSelectedUsrIndex=_dicMultiSelectedUsrIndex;
@property(retain, nonatomic) NSMutableArray *arrMultiSelectedUsr; // @synthesize arrMultiSelectedUsr=_arrMultiSelectedUsr;
@property(nonatomic) _Bool multiSelect; // @synthesize multiSelect=_multiSelect;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) NSMutableDictionary *dicMatchTip; // @synthesize dicMatchTip=_dicMatchTip;
@property(retain, nonatomic) NSMutableArray *arrResult; // @synthesize arrResult=_arrResult;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) long long resultSection; // @synthesize resultSection=_resultSection;
@property(retain, nonatomic) NSString *nsTokenUsr; // @synthesize nsTokenUsr=_nsTokenUsr;
@property(retain, nonatomic) NSString *nsTokenQuery; // @synthesize nsTokenQuery=_nsTokenQuery;
@property(nonatomic) BOOL type; // @synthesize type=_type;

@end

