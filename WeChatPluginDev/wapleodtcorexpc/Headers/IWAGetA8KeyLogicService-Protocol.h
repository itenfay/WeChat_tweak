//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController;
@protocol IWAWAGetA8KeyLogicHelper, WAWAGetA8KeyLogicHelperDelegate;

@protocol IWAGetA8KeyLogicService <NSObject>
+ (id <IWAWAGetA8KeyLogicHelper>)generateScannerWithViewController:(MMUIViewController *)arg1 delegate:(id <WAWAGetA8KeyLogicHelperDelegate>)arg2;
@end

