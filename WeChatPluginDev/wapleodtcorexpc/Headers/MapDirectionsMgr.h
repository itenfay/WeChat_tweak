//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MapDirectionsMgr
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (struct CLLocationCoordinate2D *)parseRouteWithRouteArray:(id)arg1 outCount:(unsigned long long *)arg2;
- (void)requestDirections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

