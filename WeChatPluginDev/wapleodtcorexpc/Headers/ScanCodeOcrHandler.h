//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ScanCodeOcrHandler : NSObject
{
    NSMutableArray *_m_reporterArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_reporterArray; // @synthesize m_reporterArray=_m_reporterArray;
- (void)handleOcr:(id)arg1;
- (_Bool)needCrashProtect:(id)arg1;
- (id)init;

@end

