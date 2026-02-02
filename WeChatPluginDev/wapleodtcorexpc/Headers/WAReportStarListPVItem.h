//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportStarListPVItem
{
    unsigned int _showTimestamp;
    unsigned long long _starListEnterScene;
    unsigned long long _starCount;
    NSString *_starAppidList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int showTimestamp; // @synthesize showTimestamp=_showTimestamp;
@property(copy, nonatomic) NSString *starAppidList; // @synthesize starAppidList=_starAppidList;
@property(nonatomic) unsigned long long starCount; // @synthesize starCount=_starCount;
@property(nonatomic) unsigned long long starListEnterScene; // @synthesize starListEnterScene=_starListEnterScene;
- (id)reportString;

@end

