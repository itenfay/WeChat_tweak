//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveLotteryMethodItem, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveLotteryMethodInfo : NSObject
{
    unsigned int _methodId;
    unsigned int _opType;
    MMFinderLiveTaskId *_liveTaskId;
    FinderLiveLotteryMethodItem *_methodItem;
    NSString *_requestId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned int methodId; // @synthesize methodId=_methodId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) FinderLiveLotteryMethodItem *methodItem; // @synthesize methodItem=_methodItem;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)description;
- (id)initWithLiveTaskId:(id)arg1;

@end

