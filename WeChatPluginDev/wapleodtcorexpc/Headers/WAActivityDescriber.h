//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WAActivityDescriber : NSObject
{
    unsigned int _allTaskCount;
    unsigned int _weappCount;
    unsigned int _gameCount;
    unsigned int _foregroundCount;
    unsigned int _backgroundCount;
    unsigned int _suspendCount;
    NSMutableArray *_weappAppidList;
    NSMutableArray *_gameAppidList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int suspendCount; // @synthesize suspendCount=_suspendCount;
@property(nonatomic) unsigned int backgroundCount; // @synthesize backgroundCount=_backgroundCount;
@property(nonatomic) unsigned int foregroundCount; // @synthesize foregroundCount=_foregroundCount;
@property(retain, nonatomic) NSMutableArray *gameAppidList; // @synthesize gameAppidList=_gameAppidList;
@property(nonatomic) unsigned int gameCount; // @synthesize gameCount=_gameCount;
@property(retain, nonatomic) NSMutableArray *weappAppidList; // @synthesize weappAppidList=_weappAppidList;
@property(nonatomic) unsigned int weappCount; // @synthesize weappCount=_weappCount;
@property(nonatomic) unsigned int allTaskCount; // @synthesize allTaskCount=_allTaskCount;
- (id)description;

@end

