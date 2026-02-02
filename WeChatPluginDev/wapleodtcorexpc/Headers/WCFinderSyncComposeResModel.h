//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ABAReportPrams, NSError, NSString;

@interface WCFinderSyncComposeResModel : NSObject
{
    _Bool _bResult;
    NSError *_error;
    NSString *_outputFile;
    ABAReportPrams *_videoScoreParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABAReportPrams *videoScoreParams; // @synthesize videoScoreParams=_videoScoreParams;
@property(copy, nonatomic) NSString *outputFile; // @synthesize outputFile=_outputFile;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool bResult; // @synthesize bResult=_bResult;

@end

