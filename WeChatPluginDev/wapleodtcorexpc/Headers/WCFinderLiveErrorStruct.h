//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveErrorStruct : NSObject
{
    int _errorCode;
    unsigned long long _liveId;
    unsigned long long _errorType;
    NSString *_errorInfo;
    unsigned long long _errorSeverityLevel;
    NSString *_errorTags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorTags; // @synthesize errorTags=_errorTags;
@property(nonatomic) unsigned long long errorSeverityLevel; // @synthesize errorSeverityLevel=_errorSeverityLevel;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)toReport;

@end

