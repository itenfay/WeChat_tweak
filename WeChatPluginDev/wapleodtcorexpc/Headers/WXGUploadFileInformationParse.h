//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGUploadFileInformationParse : NSObject
{
}

+ (id)GetWatchLogPathWithTimeSpan:(id)arg1;
+ (id)sharedInstance;
- (void)uploadWatchLogWithTimeSpan:(id)arg1;
- (void)onIPXXReportWatchLog:(id)arg1;
- (void)uploadExtensionLogWithTimeSpan:(id)arg1;
- (void)onIPXXReportShareExtensionLog:(id)arg1;
- (void)parseFileInformationsWithXml:(id)arg1;
- (void)onIPXX:(id)arg1;
- (id)files;

@end

