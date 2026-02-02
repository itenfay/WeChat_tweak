//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSearchResultTimeStatus : NSObject
{
    unsigned int _section;
    unsigned int _index;
    unsigned int _subType;
    unsigned int _matchType;
    unsigned long long _showTimeStamp;
    unsigned long long _exposeTimeStamp;
    unsigned long long _clickSubType;
    long long _boxIndex;
    NSString *_itemUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *itemUserName; // @synthesize itemUserName=_itemUserName;
@property(nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
@property(nonatomic) long long boxIndex; // @synthesize boxIndex=_boxIndex;
@property(nonatomic) unsigned long long clickSubType; // @synthesize clickSubType=_clickSubType;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) unsigned int section; // @synthesize section=_section;
@property(nonatomic) unsigned long long exposeTimeStamp; // @synthesize exposeTimeStamp=_exposeTimeStamp;
@property(nonatomic) unsigned long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
- (id)init;

@end

