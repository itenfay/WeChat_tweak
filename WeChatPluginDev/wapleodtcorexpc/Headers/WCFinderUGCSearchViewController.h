//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderJumpSearchUGCParams;

@interface WCFinderUGCSearchViewController
{
    WCFinderJumpSearchUGCParams *_params;
    NSString *_requestId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) WCFinderJumpSearchUGCParams *params; // @synthesize params=_params;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)requestPageData:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

