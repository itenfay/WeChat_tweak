//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FTSResultActionItem : NSObject
{
    NSString *_keyword;
    unsigned long long _actionType;
    unsigned long long _searchType;
    NSDictionary *_displayInfo;
}

- (void).cxx_destruct;
@property(nonatomic) NSDictionary *displayInfo; // @synthesize displayInfo=_displayInfo;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)genStatString;
- (unsigned int)displayCountForSection:(unsigned int)arg1;
- (_Bool)hasDisplayForSection:(unsigned int)arg1;

@end

