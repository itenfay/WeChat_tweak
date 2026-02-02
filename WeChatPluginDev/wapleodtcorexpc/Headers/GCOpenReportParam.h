//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GCOpenReportParam : NSObject
{
    unsigned long long _outSsid;
    unsigned long long _innerSourceId;
    NSDictionary *_extInfoDic;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extInfoDic; // @synthesize extInfoDic=_extInfoDic;
@property(nonatomic) unsigned long long innerSourceId; // @synthesize innerSourceId=_innerSourceId;
@property(nonatomic) unsigned long long outSsid; // @synthesize outSsid=_outSsid;

@end

