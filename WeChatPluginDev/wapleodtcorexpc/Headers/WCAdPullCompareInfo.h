//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCAdPullCompareInfo : NSObject
{
    _Bool _timelinePullResponseFlag;
    _Bool _adPullResponseFlag;
    unsigned long long _requestTime;
    WCDataItem *_timelinePullDataItem;
    WCDataItem *_adPullDataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCDataItem *adPullDataItem; // @synthesize adPullDataItem=_adPullDataItem;
@property(nonatomic) _Bool adPullResponseFlag; // @synthesize adPullResponseFlag=_adPullResponseFlag;
@property(retain, nonatomic) WCDataItem *timelinePullDataItem; // @synthesize timelinePullDataItem=_timelinePullDataItem;
@property(nonatomic) _Bool timelinePullResponseFlag; // @synthesize timelinePullResponseFlag=_timelinePullResponseFlag;
@property(nonatomic) unsigned long long requestTime; // @synthesize requestTime=_requestTime;

@end

