//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EnterpriseSearchResultItem : NSObject
{
    unsigned int _matchField;
    NSString *_matchText;
    NSObject *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *matchText; // @synthesize matchText=_matchText;
@property(nonatomic) unsigned int matchField; // @synthesize matchField=_matchField;
- (id)initWithObject:(id)arg1 matchField:(unsigned int)arg2 matchText:(id)arg3;

@end

