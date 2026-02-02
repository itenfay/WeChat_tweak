//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMGlobalLogTime : NSObject
{
    NSMutableDictionary *m_dic;
    NSMutableDictionary *m_dicProc;
}

+ (id)sharedMMGlobalLogTime;
- (void).cxx_destruct;
- (void)end:(id)arg1;
- (void)needreport:(id)arg1 withEventId:(unsigned int)arg2;
- (void)start:(id)arg1 withStep:(const char *)arg2;
- (void)dealloc;
- (id)init;

@end

