//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UploadTaskUtils : NSObject
{
}

+ (_Bool)shouldUseCgiUpload:(id)arg1 data:(id)arg2;
+ (int)getCdnFileTypeWithDataField:(id)arg1;
+ (id)getThumbFilePath:(id)arg1 data:(id)arg2;
+ (id)getMiddleFilePath:(id)arg1 data:(id)arg2;
+ (id)getFilePath:(id)arg1 data:(id)arg2;
+ (id)getTempFilePath:(id)arg1 data:(id)arg2;
+ (void)clearLocalProperty:(id)arg1;
+ (id)findRecordDataInList:(id)arg1 WithLocalDataId:(id)arg2;
+ (_Bool)isUploadSameMsg:(id)arg1 compare:(id)arg2;

@end

