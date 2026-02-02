//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMFinderLiveConcertRecentForwardScrollViewDelegate;

@interface MMFinderLiveConcertRecentForwardScrollViewDelegateProxy : NSObject
{
    unsigned long long _contentType;
    id <MMFinderLiveConcertRecentForwardScrollViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveConcertRecentForwardScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (id)initWithContentType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

