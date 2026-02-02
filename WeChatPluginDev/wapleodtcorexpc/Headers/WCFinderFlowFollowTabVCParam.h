//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCFinderFlowFollowTabVCParam : NSObject
{
    double _topExtraPadding;
    CDUnknownBlockType _dataChangeByPublichBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dataChangeByPublichBlock; // @synthesize dataChangeByPublichBlock=_dataChangeByPublichBlock;
@property(nonatomic) double topExtraPadding; // @synthesize topExtraPadding=_topExtraPadding;

@end
