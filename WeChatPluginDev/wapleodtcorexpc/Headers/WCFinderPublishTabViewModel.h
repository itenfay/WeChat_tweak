//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderPublishTabViewModel
{
    unsigned long long _maxId;
}

@property(nonatomic) unsigned long long maxId; // @synthesize maxId=_maxId;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (_Bool)isPublishTabModel;
- (int)tabType;
- (void)loadData:(_Bool)arg1;
- (id)tabTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

