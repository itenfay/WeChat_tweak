//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface WXGRoamAnalysisViewController : UIViewController
{
    NSString *_infoString;
}

@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
- (void)sendDataToFileHelper;
- (void)viewDidLoad;

@end

