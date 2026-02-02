//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BSTLExptConfig, BSTimelineFlutterPlugin;

@interface BESubFlutterViewController
{
    _Bool _didAppear;
    BSTLExptConfig *_exptConfig;
    BSTimelineFlutterPlugin *_apiImpl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(retain, nonatomic) BSTimelineFlutterPlugin *apiImpl; // @synthesize apiImpl=_apiImpl;
@property(retain, nonatomic) BSTLExptConfig *exptConfig; // @synthesize exptConfig=_exptConfig;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)registerPlugin;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithExptConfig:(id)arg1 route:(id)arg2;

@end

