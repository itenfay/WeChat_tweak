//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppDownloadItem, MMLiteAppErrorReportInfo;

@interface MMLiteAppDownloadItemWithErrorInfo : NSObject
{
    MMLiteAppErrorReportInfo *_errorReportInfo;
    MMLiteAppDownloadItem *_downloadItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiteAppDownloadItem *downloadItem; // @synthesize downloadItem=_downloadItem;
@property(retain, nonatomic) MMLiteAppErrorReportInfo *errorReportInfo; // @synthesize errorReportInfo=_errorReportInfo;
- (id)initWithInfo:(id)arg1 downloadItem:(id)arg2;

@end

