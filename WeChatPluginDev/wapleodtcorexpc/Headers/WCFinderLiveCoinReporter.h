//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveCoinReporter : NSObject
{
    NSString *m_coinSessionId;
}

+ (void)reportCoinDetail:(id)arg1;
- (void).cxx_destruct;
- (void)reportCoinAction:(unsigned long long)arg1 withSceneType:(long long)arg2;

@end

