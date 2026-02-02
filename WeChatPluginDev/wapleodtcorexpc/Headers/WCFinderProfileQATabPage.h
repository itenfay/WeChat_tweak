//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiteAppView;

@interface WCFinderProfileQATabPage
{
    MMLiteAppView *_liteAppView;
}

@property(retain, nonatomic) MMLiteAppView *liteAppView; // @synthesize liteAppView=_liteAppView;
- (void)viewDidLoad;
- (id)loadView;

@end

