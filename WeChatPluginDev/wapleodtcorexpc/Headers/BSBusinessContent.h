//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BSBusinessContent : NSObject
{
    unsigned int _continueFlag;
    unsigned int _totalCount;
    unsigned int _offset;
    unsigned long long _businessType;
    NSString *_title;
    NSMutableArray *_keyWordList;
    NSMutableArray *_itemList;
    NSString *_searchId;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSMutableArray *keyWordList; // @synthesize keyWordList=_keyWordList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;

@end

