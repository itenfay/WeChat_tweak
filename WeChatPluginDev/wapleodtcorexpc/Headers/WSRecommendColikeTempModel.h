//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WSRecommendColikeTempModel : NSObject
{
    _Bool _continueFlag;
    int _type;
    unsigned int _totalCount;
    unsigned int _updateFlag;
    NSMutableArray *_colikeList;
    unsigned long long _version;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int updateFlag; // @synthesize updateFlag=_updateFlag;
@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *colikeList; // @synthesize colikeList=_colikeList;

@end

