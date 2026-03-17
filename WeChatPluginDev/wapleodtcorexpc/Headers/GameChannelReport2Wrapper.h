//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameChannelReport2Wrapper : NSObject
{
}

+ (id)sharedInstance;
- (void)reportWithGameChannelReportInfo:(id)arg1 isLaunchApp:(_Bool)arg2;
- (id)channelInfoFromGameChannelReportInfo:(id)arg1;
- (void)initZTSDK;

@end

