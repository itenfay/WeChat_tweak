//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCOutGetProductListCgiDelegate;

@interface WCOutGetProductListCgi : NSObject
{
    unsigned int _eventID;
    id <WCOutGetProductListCgiDelegate> _delegate;
}

+ (id)cgiWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCOutGetProductListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)fail;
- (void)start:(id)arg1 reqCurrency:(id)arg2;
- (void)dealloc;

@end

