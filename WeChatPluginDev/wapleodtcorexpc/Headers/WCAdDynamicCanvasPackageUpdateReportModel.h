//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdDynamicCanvasPackageUpdateReportModel : NSObject
{
    unsigned long long _errorCode;
    NSString *_currentVersion;
}

@property(retain, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;

@end

