//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLocation, NSString;

@interface NewLifeSelectPoiHandler
{
    FinderLocation *_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
- (void)onPOIPickerCancel;
- (void)onPOIPickerFinished:(id)arg1;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

