//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesAtomicInfo : NSObject
{
    NSString *m_nsAtomicUrl;
    _Bool m_bEnable;
    NSString *m_nsAtomicTitle;
    NSString *m_nsAtomicButtonTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsAtomicButtonTitle; // @synthesize m_nsAtomicButtonTitle;
@property(retain, nonatomic) NSString *m_nsAtomicTitle; // @synthesize m_nsAtomicTitle;
@property(nonatomic) _Bool m_bEnable; // @synthesize m_bEnable;
@property(retain, nonatomic) NSString *m_nsAtomicUrl; // @synthesize m_nsAtomicUrl;

@end

