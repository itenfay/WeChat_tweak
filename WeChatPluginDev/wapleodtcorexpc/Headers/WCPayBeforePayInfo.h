//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBeforePayInfo : NSObject
{
    long long m_notifyFlag;
    NSString *m_notifyWording;
    NSString *m_leftButtonWording;
    NSString *m_rightButtonWording;
    NSString *m_confirmButtonWording;
}

+ (id)fromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_confirmButtonWording; // @synthesize m_confirmButtonWording;
@property(retain, nonatomic) NSString *m_rightButtonWording; // @synthesize m_rightButtonWording;
@property(retain, nonatomic) NSString *m_leftButtonWording; // @synthesize m_leftButtonWording;
@property(retain, nonatomic) NSString *m_notifyWording; // @synthesize m_notifyWording;
@property(nonatomic) long long m_notifyFlag; // @synthesize m_notifyFlag;
- (void)checkValueOrFillWithDefault;

@end

