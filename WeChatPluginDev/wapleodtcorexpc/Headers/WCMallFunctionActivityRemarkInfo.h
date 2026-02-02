//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMallFunctionActivityRemarkInfo : NSObject
{
    NSString *m_nsName;
    NSString *m_nsValue;
    int m_uiShowType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsValue; // @synthesize m_nsValue;
@property(retain, nonatomic) NSString *m_nsName; // @synthesize m_nsName;
@property(nonatomic) int m_uiShowType; // @synthesize m_uiShowType;

@end

