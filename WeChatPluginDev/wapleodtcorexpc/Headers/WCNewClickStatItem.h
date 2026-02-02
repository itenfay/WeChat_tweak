//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString;

@interface WCNewClickStatItem
{
    unsigned int dataType;
    unsigned int errType;
    unsigned int enterTime;
    unsigned int scene;
    unsigned int quitTime;
    int interval;
    unsigned int lastQuitTime;
    int backGroundInterval;
    int lastInterval;
    unsigned int seq;
    int sumInterval;
    unsigned int outOfOrderCount;
    unsigned int pageCount;
    unsigned int realSwitchCount;
    unsigned int lastSwitchForeTime;
    unsigned int lastSwitchBackTime;
    int realInterval;
    int realBackGroundInterval;
    unsigned int realLastQuitTS;
    unsigned int realFirstEnterTS;
    NSString *pageFlow;
    NSMutableArray *pageList;
    NSArray *_pageFormatList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pageFormatList; // @synthesize pageFormatList=_pageFormatList;
@property(nonatomic) unsigned int realFirstEnterTS; // @synthesize realFirstEnterTS;
@property(nonatomic) unsigned int realLastQuitTS; // @synthesize realLastQuitTS;
@property(nonatomic) int realBackGroundInterval; // @synthesize realBackGroundInterval;
@property(nonatomic) int realInterval; // @synthesize realInterval;
@property(nonatomic) unsigned int lastSwitchBackTime; // @synthesize lastSwitchBackTime;
@property(nonatomic) unsigned int lastSwitchForeTime; // @synthesize lastSwitchForeTime;
@property(nonatomic) unsigned int realSwitchCount; // @synthesize realSwitchCount;
@property(retain, nonatomic) NSMutableArray *pageList; // @synthesize pageList;
@property(retain, nonatomic) NSString *pageFlow; // @synthesize pageFlow;
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount;
@property(nonatomic) unsigned int outOfOrderCount; // @synthesize outOfOrderCount;
@property(nonatomic) int sumInterval; // @synthesize sumInterval;
@property(nonatomic) unsigned int seq; // @synthesize seq;
@property(nonatomic) int lastInterval; // @synthesize lastInterval;
@property(nonatomic) int backGroundInterval; // @synthesize backGroundInterval;
@property(nonatomic) unsigned int lastQuitTime; // @synthesize lastQuitTime;
@property(nonatomic) int interval; // @synthesize interval;
@property(nonatomic) unsigned int quitTime; // @synthesize quitTime;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) unsigned int enterTime; // @synthesize enterTime;
@property(nonatomic) unsigned int errType; // @synthesize errType;
@property(nonatomic) unsigned int dataType; // @synthesize dataType;
- (void)fixPageFlow;
- (void)checkMisMatchUI;
- (void)checkOutOfOrder;
- (void)checkIsOK;
- (void)checkData;
- (id)formatPageList;
- (id)formatOriginalPageFlow;
- (int)calSumInterval;
- (void)calData;
- (id)description;
- (id)toString;
- (void)calAndFixData;

@end

