//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKCodelessIndexer : NSObject
{
}

+ (id)dimensionOf:(id)arg1;
+ (id)screenshot;
+ (id)recursiveCaptureTree:(id)arg1;
+ (id)currentViewTree;
+ (void)uploadIndexing:(id)arg1;
+ (void)uploadIndexing;
+ (void)startIndexing;
+ (id)extInfo;
+ (id)currentSessionDeviceID;
+ (void)checkCodelessIndexingSession;
+ (void)setupGesture;
+ (_Bool)_codelessSetupTimestampIsValid:(id)arg1;
+ (id)requestToLoadCodelessSetup:(id)arg1;
+ (void)loadCodelessSettingWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)enable;

@end

