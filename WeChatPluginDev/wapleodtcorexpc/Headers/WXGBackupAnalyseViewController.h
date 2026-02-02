//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITextView;

@interface WXGBackupAnalyseViewController : NSObject
{
    UITextView *_infoTextView;
    NSString *_infoString;
}

@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(retain, nonatomic) UITextView *infoTextView; // @synthesize infoTextView=_infoTextView;
- (void)sendDataToFileHelper;
- (void)showAnalyseInfo;
- (void)viewDidLoad;

@end

