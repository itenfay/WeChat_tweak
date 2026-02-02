//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCOutCouponCgiDelegate;

@interface WCOutCouponCgi : NSObject
{
    unsigned int _eventID;
    id <WCOutCouponCgiDelegate> _delegate;
}

+ (id)CGIWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
@property(nonatomic) __weak id <WCOutCouponCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)fail;
- (void)start:(unsigned int)arg1;
- (void)dealloc;

@end

