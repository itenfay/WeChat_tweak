//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedDetailStatusView;

@interface MMMusicInvalidStatusViewController
{
    unsigned long long _type;
    NSString *_msgText;
    WCFinderFeedDetailStatusView *_finderStatusView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedDetailStatusView *finderStatusView; // @synthesize finderStatusView=_finderStatusView;
@property(copy, nonatomic) NSString *msgText; // @synthesize msgText=_msgText;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)onTappedClose;
- (_Bool)useTransparentNavibar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

