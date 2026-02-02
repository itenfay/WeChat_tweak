//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CNewSyncWrap : NSObject
{
    unsigned int m_uiSelector;
    unsigned int m_uiCgi;
    _Bool m_bIsSyncIng;
    _Bool m_bContinue;
    NSString *m_nsSyncKeyMd5;
    unsigned int m_uiSyncBufferType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiSyncBufferType; // @synthesize m_uiSyncBufferType;
@property(retain, nonatomic) NSString *m_nsSyncKeyMd5; // @synthesize m_nsSyncKeyMd5;
@property(nonatomic) _Bool m_bContinue; // @synthesize m_bContinue;
@property(nonatomic) _Bool m_bIsSyncIng; // @synthesize m_bIsSyncIng;
@property(nonatomic) unsigned int m_uiCgi; // @synthesize m_uiCgi;
@property(nonatomic) unsigned int m_uiSelector; // @synthesize m_uiSelector;
- (id)init;

@end

