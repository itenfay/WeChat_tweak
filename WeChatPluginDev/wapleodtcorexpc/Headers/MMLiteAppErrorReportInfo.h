//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiteAppErrorReportInfo : NSObject
{
    int _downloadErrorCode;
    unsigned long long _errorCode;
    unsigned long long _downloadErrorType;
}

@property(nonatomic) int downloadErrorCode; // @synthesize downloadErrorCode=_downloadErrorCode;
@property(nonatomic) unsigned long long downloadErrorType; // @synthesize downloadErrorType=_downloadErrorType;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;

@end

