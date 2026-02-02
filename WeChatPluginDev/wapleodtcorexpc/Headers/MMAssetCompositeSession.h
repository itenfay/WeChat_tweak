//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ABAReportPrams, NSString;

@interface MMAssetCompositeSession : NSObject
{
    NSString *_sessionId;
    NSString *_outputFilePath;
    ABAReportPrams *_reportParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABAReportPrams *reportParams; // @synthesize reportParams=_reportParams;
@property(retain, nonatomic) NSString *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)initWithSessionId:(id)arg1;

@end

