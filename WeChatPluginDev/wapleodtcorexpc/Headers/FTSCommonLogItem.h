//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSCommonLogItem : NSObject
{
    unsigned int _row;
    NSString *_query;
    unsigned long long _searchScene;
    unsigned long long _clickType;
    unsigned long long _matchType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned int row; // @synthesize row=_row;
@property(nonatomic) unsigned long long clickType; // @synthesize clickType=_clickType;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)report;
- (void)parse:(id)arg1;
- (id)initWithParams:(id)arg1;

@end

