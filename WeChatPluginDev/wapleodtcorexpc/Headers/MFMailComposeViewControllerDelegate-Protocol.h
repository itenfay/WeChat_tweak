//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MFMailComposeViewController, NSError;

@protocol MFMailComposeViewControllerDelegate <NSObject>

@optional
- (void)mailComposeController:(MFMailComposeViewController *)arg1 didFinishWithResult:(long long)arg2 error:(NSError *)arg3;
@end

