//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMStatusBarFixer
{
    long long _statusBarStyle;
}

+ (void)tryFixStatusBar;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (id)init;

@end

