//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MPPageRelatedInfoCgiTaskResult
{
    unsigned int _refreshIntervalSec;
    unsigned int _maxRequestUrlCount;
    NSArray *_relatedInfoArr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maxRequestUrlCount; // @synthesize maxRequestUrlCount=_maxRequestUrlCount;
@property(nonatomic) unsigned int refreshIntervalSec; // @synthesize refreshIntervalSec=_refreshIntervalSec;
@property(retain, nonatomic) NSArray *relatedInfoArr; // @synthesize relatedInfoArr=_relatedInfoArr;
- (id)description;

@end

