//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderAdFeedbackParams : NSObject
{
    NSString *_reportData;
    NSString *_reportBypData;
    unsigned long long _businessType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *reportBypData; // @synthesize reportBypData=_reportBypData;
@property(copy, nonatomic) NSString *reportData; // @synthesize reportData=_reportData;

@end

