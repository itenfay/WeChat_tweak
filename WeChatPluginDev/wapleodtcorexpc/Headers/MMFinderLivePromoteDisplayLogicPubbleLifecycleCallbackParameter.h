//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLivePromoteMsgInfo, UIView;
@protocol MMFinderLiveOperationViewDelegate;

@interface MMFinderLivePromoteDisplayLogicPubbleLifecycleCallbackParameter : NSObject
{
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <MMFinderLiveOperationViewDelegate> operationDelegate;
@property(readonly, nonatomic) FinderLivePromoteMsgInfo *promoteMsgInfo;
@property(readonly, nonatomic) UIView *promotePubbleView;
@property(readonly, nonatomic) unsigned long long type;

@end

