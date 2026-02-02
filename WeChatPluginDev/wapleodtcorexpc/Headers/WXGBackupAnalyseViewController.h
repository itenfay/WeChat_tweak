//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITextView;

@interface WXGBackupAnalyseViewController
{
    UITextView *_infoTextView;
    NSString *_infoString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(retain, nonatomic) UITextView *infoTextView; // @synthesize infoTextView=_infoTextView;
- (void)sendDataToFileHelper;
- (void)showAnalyseInfo;
- (void)viewDidLoad;

@end

