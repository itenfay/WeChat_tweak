//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface WCCrashReportInfoUtil : NSObject
{
    NSMutableArray *_binaryImages;
    NSDictionary *_systemInfo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(retain, nonatomic) NSMutableArray *binaryImages; // @synthesize binaryImages=_binaryImages;
- (id)getSystemInfo;
- (id)getBinaryImages;
- (void)setupBinaryImages;
- (void)setupSystemInfo;
- (id)init;

@end

