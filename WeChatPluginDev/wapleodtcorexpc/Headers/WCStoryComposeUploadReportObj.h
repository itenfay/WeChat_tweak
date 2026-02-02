//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryComposeUploadReportObj : NSObject
{
    unsigned long long _composeTime;
    unsigned long long _composeErrorType;
    unsigned long long _uploadTime;
    unsigned long long _uploadErrorType;
    NSString *_composeErrorTypeStr;
    NSString *_uploadErrorTypeStr;
}

+ (void)reportUploadFailedWithStartTime:(unsigned long long)arg1 errorType:(long long)arg2;
+ (void)reportComposeFailedWithStartTime:(unsigned long long)arg1 errorType:(long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uploadErrorTypeStr; // @synthesize uploadErrorTypeStr=_uploadErrorTypeStr;
@property(copy, nonatomic) NSString *composeErrorTypeStr; // @synthesize composeErrorTypeStr=_composeErrorTypeStr;
@property(nonatomic) unsigned long long uploadErrorType; // @synthesize uploadErrorType=_uploadErrorType;
@property(nonatomic) unsigned long long uploadTime; // @synthesize uploadTime=_uploadTime;
@property(nonatomic) unsigned long long composeErrorType; // @synthesize composeErrorType=_composeErrorType;
@property(nonatomic) unsigned long long composeTime; // @synthesize composeTime=_composeTime;
- (void)reportComposeUploadFailed;

@end

