//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UITextField;

@interface WCFinderFeedPickerDebugViewController : NSObject
{
    UITextField *_sceneTextView;
}

@property(retain, nonatomic) UITextField *sceneTextView; // @synthesize sceneTextView=_sceneTextView;
- (void)onDone;
- (void)viewDidLoad;

@end

