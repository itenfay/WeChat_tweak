//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderGroupMemberViewModel : NSObject
{
    _Bool _hasFetchData;
    _Bool _isFetchingData;
    _Bool _continueFlag;
    _Bool _hadJoinedGroup;
    NSMutableArray *_items;
    unsigned long long _authorCount;
    CDUnknownBlockType _dataChangeBlock;
    NSData *_lastBuffer;
    NSString *_finderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) CDUnknownBlockType dataChangeBlock; // @synthesize dataChangeBlock=_dataChangeBlock;
@property(nonatomic) unsigned long long authorCount; // @synthesize authorCount=_authorCount;
@property(nonatomic) _Bool hadJoinedGroup; // @synthesize hadJoinedGroup=_hadJoinedGroup;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)fetchMoreData;
- (id)initWithFinderContact:(id)arg1;

@end

