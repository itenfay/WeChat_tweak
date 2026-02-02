//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCOutPurchasePackageDelegate;

@interface WCOutPurchasePackageCgi : NSObject
{
    unsigned int _eventID;
    id <WCOutPurchasePackageDelegate> _delegate;
}

+ (id)instanceWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCOutPurchasePackageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doCgi:(id)arg1;

@end

