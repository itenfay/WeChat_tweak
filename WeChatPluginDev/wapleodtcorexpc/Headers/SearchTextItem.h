//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SearchTextItem : NSObject
{
    NSString *_searchText;
    NSMutableArray *_arrKeywordItem;
    _Bool _bSpaceSeperated;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSpaceSeperated; // @synthesize bSpaceSeperated=_bSpaceSeperated;
@property(retain, nonatomic) NSMutableArray *arrKeywordItem; // @synthesize arrKeywordItem=_arrKeywordItem;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (_Bool)isMultiKeyword;
- (id)init;

@end

