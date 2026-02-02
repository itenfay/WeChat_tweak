//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFPSRecorder : NSObject
{
    unsigned long long **m_stackCyclePool;
    unsigned long long *m_stackCount;
    unsigned long long m_poolTailPoint;
    unsigned int m_maxStackCount;
    unsigned int m_repeatCount;
    _Bool _shouldDump;
    _Bool _shouldDumpCpuUsage;
    _Bool _shouldExit;
    _Bool _autoUpload;
    int _recordID;
    int _dumpInterval;
    unsigned long long _trackingType;
    double _dumpTimeBegin;
    double _dumpTimeTotal;
    NSString *_scene;
    NSString *_reportID;
    NSString *_reportPath;
    id _customInfo;
    NSMutableArray *_parentAddressFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *parentAddressFrame; // @synthesize parentAddressFrame=_parentAddressFrame;
@property(retain, nonatomic) id customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSString *reportPath; // @synthesize reportPath=_reportPath;
@property(retain, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool autoUpload; // @synthesize autoUpload=_autoUpload;
@property(nonatomic) _Bool shouldExit; // @synthesize shouldExit=_shouldExit;
@property(nonatomic) _Bool shouldDumpCpuUsage; // @synthesize shouldDumpCpuUsage=_shouldDumpCpuUsage;
@property(nonatomic) _Bool shouldDump; // @synthesize shouldDump=_shouldDump;
@property(nonatomic) double dumpTimeTotal; // @synthesize dumpTimeTotal=_dumpTimeTotal;
@property(nonatomic) double dumpTimeBegin; // @synthesize dumpTimeBegin=_dumpTimeBegin;
@property(nonatomic) int dumpInterval; // @synthesize dumpInterval=_dumpInterval;
@property(nonatomic) int recordID; // @synthesize recordID=_recordID;
@property(nonatomic) unsigned long long trackingType; // @synthesize trackingType=_trackingType;
- (id)description;
- (void)p_mergedAddressFrameArray:(id)arg1 with:(id)arg2;
- (void)p_mergeAddressFrame:(id)arg1 with:(id)arg2;
- (void)p_addAddressFrame:(id)arg1;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (id)p_getInfoDictFromAddressFrame:(id)arg1;
- (id)makeCallTree;
- (void)addThreadStack:(unsigned long long *)arg1 andLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithMaxStackTraceCount:(unsigned int)arg1 timeInterval:(unsigned int)arg2;
- (id)init;

@end

