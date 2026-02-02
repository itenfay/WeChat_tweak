//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EnterpriseRemoteSearchResult : NSObject
{
    _Bool _hasMore;
    unsigned int _offset;
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;

@end

